## Various jupyter notebooks

### Setup
```bash
# edit the port and add additional packages into `setup_container.sh`
# start a jupyter notebook
./start_server.sh

# on your local computer, forward the port before you can visit the url. e.g.,
ssh -N -f -L localhost:8893:localhost:8893 uaf-10.t2.ucsd.edu
```

### Notebooks

* `fourmu.ipynb` uses `coffea` tools to look at H to ZZ to 4mu in Run2 DoubleMuon datasets
* `trijet.ipynb` uses `coffea` to store invariant masses of 2,3,4,5 jets with Run2 JetHT datasets
