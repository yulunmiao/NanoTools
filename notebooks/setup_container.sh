#!/usr/bin/env bash

[ -d virtualenv ] || pip install --target=`pwd`/virtualenv virtualenv
[ -d myenv ] || virtualenv/bin/virtualenv -p `which python` myenv
source myenv/bin/activate
pip3 install -U matplotlib uproot coffea jupyter tqdm pandas
jupyter notebook --no-browser --port=8893

