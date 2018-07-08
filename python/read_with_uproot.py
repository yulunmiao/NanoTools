import os
import sys

import numba
import numpy as np
import uproot

from tqdm import tqdm


f = uproot.open("../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root")
t = f["Events"]

jet_info = t.arrays(["Jet_pt","Jet_eta","Jet_phi","Jet_mass"])
electron_info = t.arrays(["Electron_pt","Electron_eta","Electron_phi","Electron_mass","Electron_jetIdx","Electron_mvaTTH"])

ptratios = []
mvas = []
for ievt,(jet_idxs, el_pts, el_mvas, jet_pts) in tqdm(enumerate(zip(
        electron_info["Electron_jetIdx"],
        electron_info["Electron_pt"],
        electron_info["Electron_mvaTTH"],
        jet_info["Jet_pt"],
        ))):
    good = jet_idxs >= 0
    ptratios.extend( el_pts[good]/jet_pts[jet_idxs[good]] )
    mvas.extend( el_mvas[good] )

ptratios = np.array(ptratios)
mvas = np.array(mvas)

import matplotlib as mpl
mpl.use('Agg')
import matplotlib.pyplot as plt
fig, ax = plt.subplots()
ax.hist(ptratios[mvas > 0.0], bins=np.linspace(-0.1,1.1,100),histtype="stepfilled",alpha=0.5, normed=True, label="good")
ax.hist(ptratios[mvas < 0.0], bins=np.linspace(-0.1,1.1,100),histtype="stepfilled",alpha=0.5, normed=True, label="bad")
ax.legend()
fig.savefig("ptratios.png")
os.system("which ic && ic ptratios.png")
