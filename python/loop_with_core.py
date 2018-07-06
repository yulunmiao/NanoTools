import numpy as np
from tqdm import tqdm
import ROOT as r
import os

ch = r.TChain("Events")
ch.Add("../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root")
# ch.Add("root://cmsxrootd.fnal.gov///store/data/Run2017F/DoubleMuon/NANOAOD/31Mar2018-v1/20000/B8AAFAB7-B248-E811-BD17-001E67248138.root")

r.gROOT.ProcessLine(".L ../NanoCORE/Nano.cc+")
tas = r.tas
nt = r.nt

# FIXME
nt.Init(ch)

# for evt in ch: 
#     print evt  
#     print 
#     break

h1 = r.TH1F("ht","",100,0,800)

blah

xxx term=reverse cterm=underline ctermfg=204 gui=underline guifg=#E06C75

# import numba
# @numba.njit
# def get_ht(blah):
#     return sum(blah)

def process_event(ievent):
    nt.GetEntry(ievent)

    ht = 0.

    # for p4 in nt.Jet_p4():
    #     ht += p4.pt()

    for x in tas.Jet_pt():
        ht += x
    # print get_ht(tas.Jet_pt())

    h1.Fill(ht)


    # ht = sum(nt.Jet_pt())
    # h1.Fill(ht)

    # ht = sum(nt.Jet_pt())


import random
# for ievent in tqdm(range(ch.GetEntries())[::-2]):
# blah = range(ch.GetEntries())
# random.shuffle(blah)
# for ievent in tqdm(blah):
for ievent in tqdm(range(ch.GetEntries())):
# for ievent in tqdm(range(10)):
    process_event(ievent)
    # break

c1 = r.TCanvas()
h1.Draw()
c1.SaveAs("plot.pdf")
os.system("ic plot.pdf")
