## Style

We use artistic style to format our code

Add this to the ```~/.vimrc``` and use ```vim``` to code. (Assumes you are working on UAF)

    autocmd BufNewFile,BufRead *.cxx set formatprg=/home/users/phchang/software/bin/astyle\ -U\ --delete-empty-lines\ --pad-oper\ --keep-one-line-blocks\ --pad-header\ --style=allman\ --keep-one-line-blocks\ --indent-switches\ --break-one-line-headers\ --add-braces\ --pad-comma
    autocmd BufNewFile,BufRead *.cc set formatprg=/home/users/phchang/software/bin/astyle\ -U\ --delete-empty-lines\ --pad-oper\ --keep-one-line-blocks\ --pad-header\ --style=allman\ --keep-one-line-blocks\ --indent-switches\ --break-one-line-headers\ --add-braces\ --pad-comma
    autocmd BufNewFile,BufRead *.C set formatprg=/home/users/phchang/software/bin/astyle\ -U\ --delete-empty-lines\ --pad-oper\ --keep-one-line-blocks\ --pad-header\ --style=allman\ --keep-one-line-blocks\ --indent-switches\ --break-one-line-headers\ --add-braces\ --pad-comma
    autocmd BufNewFile,BufRead *.h set formatprg=/home/users/phchang/software/bin/astyle\ -U\ --delete-empty-lines\ --pad-oper\ --keep-one-line-blocks\ --pad-header\ --style=allman\ --keep-one-line-blocks\ --indent-switches\ --break-one-line-headers\ --add-braces\ --pad-comma

To format press ```ggvGgq``` to format your code in "artistic" way.

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
