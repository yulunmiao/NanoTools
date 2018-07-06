import os
import sys

import numba
import numpy as np
import uproot

from tqdm import tqdm

@numba.njit()
def dPhi(phi1,phi2):
    dphi = np.abs(phi2-phi1)
    if dphi >= np.pi: dphi -= 2.0*np.pi
    if dphi < -np.pi: dphi += 2.0*np.pi
    return dphi

@numba.njit()
def deltaR(eta1,phi1,eta2,phi2):
    dphi = dPhi(phi1,phi2)
    deta = eta2-eta1
    return (deta*deta+dphi*dphi)**0.5

@numba.njit()
def transverse_mass(pt1,phi1,pt2,phi2):
    return (2.0*pt1*pt2*(1-np.cos(phi1-phi2)))**0.5

@numba.njit()
def invariant_mass(pt1,eta1,phi1,mass1,pt2,eta2,phi2,mass2):
    px1 = pt1*np.cos(phi1)
    px2 = pt2*np.cos(phi2)
    py1 = pt1*np.sin(phi1)
    py2 = pt2*np.sin(phi2)
    pz1 = pt1*np.sinh(eta1)
    pz2 = pt2*np.sinh(eta2)
    e1 = np.sqrt(px1**2+py1**2+pz1**2+mass1**2)
    e2 = np.sqrt(px2**2+py2**2+pz2**2+mass2**2)
    return np.sqrt((e1+e2)**2 - (px1+px2)**2 - (py1+py2)**2 - (pz1+pz2)**2)

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
