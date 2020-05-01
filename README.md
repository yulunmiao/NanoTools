## Style

We use `clang-format` based on LLVM style to format our code. To format the `ElectronSelections.cc` file in-place, do
```bash
clang-format -style="{BasedOnStyle: llvm, IndentWidth: 4, ColumnLimit: 100, AllowShortIfStatementsOnASingleLine: true, AllowShortBlocksOnASingleLine: true}" -i ElectronSelections.cc
```

Add this to the ```~/.vimrc``` and use ```vim``` to code. (Assumes you are working on UAF)

    autocmd BufNewFile,BufRead *.cc,*.h,*.C,*.cxx set formatprg=clang-format\ -style=\"{BasedOnStyle:\ llvm,\ IndentWidth:\ 4,\ ColumnLimit:\ 100,\ AllowShortIfStatementsOnASingleLine:\ true,\ AllowShortBlocksOnASingleLine:\ true}\"

To format press ```ggvGgq``` to format your code.

## This is a WIP of course

### Environment & setup
```bash
cd /cvmfs/cms.cern.ch/slc6_amd64_gcc700/cms/cmssw/CMSSW_10_2_9/ ; cmsenv ; cd -
cd NanoCORE
make -j8 # takes about 20 seconds
```

### Python dependencies (if desired)
```bash
# install uproot with python2.7 and python3
pip install uproot --user
pip3 install uproot --user
```
