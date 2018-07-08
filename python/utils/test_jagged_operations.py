import time
import os
import sys

import numba
import numpy as np
import uproot


f = uproot.open("../../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root")
# f = uproot.open("../../6204E92D-C712-E811-AF42-E0071B740D80.root")
t = f["Events"]

t0 = time.time()
info = t.arrays(["Electron_pt","Electron_jetIdx","Jet_pt"]) #,entrystart=10, entrystop=15)
print (time.time()-t0)

pts = info["Electron_pt"]
offsets = pts.offsets

from jagged_operations import jagged_foreach_function, \
        jagged_foreach_count, jagged_foreach_count_if, \
        jagged_foreach_sum, jagged_foreach_sum_if, \
        jagged_foreach_min, jagged_foreach_min_if, \
        jagged_foreach_max, jagged_foreach_max_if

def test_operation(name,func_fast,func_slow, jagged,masks=None):
    offsets = jagged.offsets
    content = jagged.content
    # call once here to not count jitting time after t0 is set
    if masks is None:
        accums_fast = func_fast(content,offsets)
    else:
        accums_fast = func_fast(content,offsets,masks)
    t0 = time.time()
    if masks is None:
        accums_fast = func_fast(content,offsets)
    else:
        accums_fast = func_fast(content,offsets,masks)
    t1 = time.time()
    accums_slow = np.array(map(func_slow,jagged))
    t2 = time.time()

    slow_sum = accums_slow.sum()
    fast_sum = accums_fast.sum()
    slow_time = t2-t1
    fast_time = t1-t0
    print "{:<7} tfast={:.4f}s, slow={:.2f}s -> {:.0f}x | sumfast={:.0f}, slow={:.0f}, %diff={:.3f}%".format(
            name, fast_time, slow_time, slow_time/fast_time, fast_sum, slow_sum, 100.0*(fast_sum-slow_sum)/slow_sum
            )
    return


mymin = lambda x: 0. if not len(x) else np.min(x)
mymax = lambda x: 0. if not len(x) else np.max(x)




# print jagged_foreach_function(lambda x: np.sum(x))(pts.content, pts.offsets)
# print jagged_operation(pts, "func", func=lambda x: np.sum(x))

test_operation("func", jagged_foreach_function(mymin), mymin, pts)
test_operation("count", jagged_foreach_count, len, pts)
test_operation("sum", jagged_foreach_sum, sum, pts)
test_operation("min", jagged_foreach_min, mymin, pts)
test_operation("max", jagged_foreach_max, mymax, pts)
test_operation("countif", jagged_foreach_count_if, len, pts, masks=np.ones(len(pts.content))>0)
test_operation("sumif", jagged_foreach_sum_if, sum, pts, masks=np.ones(len(pts.content))>0)
test_operation("minif", jagged_foreach_min_if, mymin, pts, masks=np.ones(len(pts.content))>0)
test_operation("maxif", jagged_foreach_max_if, mymax, pts, masks=np.ones(len(pts.content))>0)

