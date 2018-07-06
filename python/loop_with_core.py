from tqdm import tqdm
import ROOT as r
import os

ch = r.TChain("Events")
ch.Add("../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root")
# ch.Add("root://cmsxrootd.fnal.gov///store/data/Run2017F/DoubleMuon/NANOAOD/31Mar2018-v1/20000/B8AAFAB7-B248-E811-BD17-001E67248138.root")

r.gSystem.Load('../NanoCORE/NANO_CORE.so')
for include in ["Nano.cc", "SSSelections.cc", "MetSelections.cc"]:
    r.gInterpreter.ProcessLine('#include "../NanoCORE/%s"' % include)

# CORE functions will be ROOT object members after we gSystem.Load CORE
from ROOT import nt, passesMETfiltersMoriond17, isGoodMuon

nt.Init(ch)
N = ch.GetEntries()

h1 = r.TH1F("h1","",100,0,200)

def process_event(ievent):
    nt.GetEntry(ievent)

    for imu,pt in enumerate(nt.Muon_pt()):
        if pt < 25: continue
        if not isGoodMuon(imu): continue
        h1.Fill(pt)


for ievent in tqdm(range(ch.GetEntries())):
    process_event(ievent)

print(h1.GetMean())

c1 = r.TCanvas()
h1.Draw()
c1.SaveAs("plot.pdf")
os.system("which ic && ic plot.pdf")
