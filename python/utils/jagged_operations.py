import numba
import numpy as np

def jagged_operation(jagged_arr=None, jagged_idxs=None, typ=None, masks=None, func=None):
    if not typ: raise Exception("Uh, what?")
    if typ == "count":
        if masks is not None:
            return jagged_foreach_count(jagged_arr.content, jagged_arr.offsets)
        else:
            return jagged_foreach_count_if(jagged_arr.content, jagged_arr.offsets, masks)
    elif typ == "sum":
        if masks is not None:
            return jagged_foreach_sum(jagged_arr.content, jagged_arr.offsets)
        else:
            return jagged_foreach_sum_if(jagged_arr.content, jagged_arr.offsets, masks)
    elif typ == "min":
        if masks is not None:
            return jagged_foreach_min(jagged_arr.content, jagged_arr.offsets)
        else:
            return jagged_foreach_min_if(jagged_arr.content, jagged_arr.offsets, masks)
    elif typ == "max":
        if masks is not None:
            return jagged_foreach_max(jagged_arr.content, jagged_arr.offsets)
        else:
            return jagged_foreach_max_if(jagged_arr.content, jagged_arr.offsets, masks)
    elif typ == "func":
        return jagged_foreach_function(func)(jagged_arr.content, jagged_arr.offsets)
    elif typ == "index2into1":
        return jagged_foreach_index(jagged_arr.content, jagged_arr.offsets, jagged_idxs.content, jagged_idxs.offsets, masks)

@numba.jit(nopython=True)
def jagged_foreach_count(content,offsets):
    # TODO, eventually, we don't need to even use `content` so take it out
    return np.diff(offsets)

@numba.jit(nopython=True)
def jagged_foreach_count_if(content,offsets,masks):
    result = np.zeros(len(offsets)-1,dtype=offsets.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        for i in range(stop-start):
            if masks[cursor_val]:
                result[cursor_off] += 1
            cursor_val += 1
        cursor_off += 1
    return result


@numba.jit(nopython=True)
def jagged_foreach_sum(content,offsets):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        accum = 0.
        for i in range(stop-start):
            accum += content[cursor_val]
            cursor_val += 1
        result[cursor_off] = accum
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_sum_if(content,offsets,masks):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        accum = 0.
        for i in range(stop-start):
            if masks[cursor_val]:
                accum += content[cursor_val]
            cursor_val += 1
        result[cursor_off] = accum
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_mean(content,offsets):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        accum = 0.
        for i in range(stop-start):
            accum += content[cursor_val]
            cursor_val += 1
        if stop != start:
            result[cursor_off] = accum/(stop-start)
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_mean_if(content,offsets,masks):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        accum = 0.
        ngood = 0
        for i in range(stop-start):
            if masks[cursor_val]:
                accum += content[cursor_val]
                ngood += 1
            cursor_val += 1
        if ngood != 0:
            result[cursor_off] = accum/(stop-start)
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_min(content,offsets):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        best = 2.0e6
        for i in range(stop-start):
            val = content[cursor_val]
            if val < best:
                best = val
            cursor_val += 1
        if best < 1.0e6:
            result[cursor_off] = best
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_min_if(content,offsets,masks):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        best = 2.0e6
        for i in range(stop-start):
            if masks[cursor_val]:
                val = content[cursor_val]
                if val < best:
                    best = val
            cursor_val += 1
        if best < 1.0e6:
            result[cursor_off] = best
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_max(content,offsets):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        best = -2.0e6
        for i in range(stop-start):
            val = content[cursor_val]
            if val > best:
                best = val
            cursor_val += 1
        if best > -1.0e6:
            result[cursor_off] = best
        cursor_off += 1
    return result

@numba.jit(nopython=True)
def jagged_foreach_max_if(content,offsets,masks):
    result = np.zeros(len(offsets)-1,dtype=content.dtype)
    cursor_val = 0
    cursor_off = 0
    while cursor_off < len(offsets)-1:
        start = offsets[cursor_off]
        stop = offsets[cursor_off+1]
        best = -2.0e6
        for i in range(stop-start):
            if masks[cursor_val]:
                val = content[cursor_val]
                if val > best:
                    best = val
            cursor_val += 1
        if best > -1.0e6:
            result[cursor_off] = best
        cursor_off += 1
    return result

# https://numba.pydata.org/numba-doc/dev/user/faq.html#can-i-pass-a-function-as-an-argument-to-a-jitted-function
def jagged_foreach_function(func):
    func = numba.jit(nopython=True)(func)
    # func = numba.jit("f4(f4[:])",nopython=True)(func)
    @numba.jit(nopython=True)
    def wrapped(content,offsets):
        result = np.zeros(len(offsets)-1,dtype=content.dtype)
        # cursor_val = 0
        cursor_off = 0
        while cursor_off < len(offsets)-1:
            start = offsets[cursor_off]
            stop = offsets[cursor_off+1]
            result[cursor_off] = func(content[start:stop])
            cursor_off += 1
        return result
    return wrapped

@numba.jit(nopython=True, cache=True)
def jagged_foreach_index(content1, offsets1, content2, offsets2,masks):
    """
    Takes two jagged arrays, where one is an index to the other
    and returns elements in 1 using 2's indices
    FOR Example, 1 = jets, 2 = electrons, and we want to get back the jet matched to each electron
    so the return type is the size of the electron array
    Also needs a boolean masks parameter (with the same jaggedness as 2)
    """
    result = np.zeros(len(content2),dtype=content1.dtype)
    cursor_val2 = 0
    cursor_off = 0
    while cursor_off < len(offsets2)-1:
        start1 = offsets1[cursor_off]
        # stop1 = offsets1[cursor_off+1]
        start2 = offsets2[cursor_off]
        stop2 = offsets2[cursor_off+1]
        for i in range(stop2-start2):
            if masks[cursor_val2]:
                idx = content2[cursor_val2]
                result[cursor_val2] = content1[start1+idx]
            else:
                result[cursor_val2] = -1.
            cursor_val2 += 1
        cursor_off += 1
    return result
