## C++ based looper

In this folder, there is a "standard" C++ looper that is hooked up to NanoCORE already, implementing
some same-sign selections.

### Instructions
A standalone looper can be made with 
```bash
python ../utils/make_nanoclassfiles.py ../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root -t Events -l
```

Note that the `-l` will create the looper, including the class files, and a header file for the (pretty)
progressbar. It will not include the CORE functionality, but it will be fully-functional otherwise
(e.g., only a few keystrokes away from running it and seeing an output ROOT file).

Furthermore, you can specify `--profiling` to make a beefier class file with more functions to help
profile your code.


### Looper features

#### LorentzVectors
In nanoAOD, there are no branches of LorentzVectors, only things like `Muon_pt`, `Muon_eta`, 
`Muon_phi`, `Muon_mass`. Fear not, since the `Nano.cc`/`Nano.h` class file makes a `tas::Muon_p4()`
collection available (as an `std::vector<LorentzVector>`), which only auto-computes (and caches) the LorentzVectors
if the user has requested them for that event. Bear in mind the non-trivial performance impact from
getting LorentzVectors when you only really need `_pt` and/or `_eta` most of the time.


#### Getting branches by strings
Since C++ lacks in terms of code introspection, there are some methods
(`tas::GetVF`, `tas::GetI`, `tas::GetVLV`, `tas::GetF`, `tas::GetB`, `tas::GetVI`, `tas::GetVB`)
that retrieve branches of `std::vector<float>`, `int`, `std::vector<LorentzVector>`, `float`, ... You see the pattern.
Why? You might want to do something as contrived as 
```cpp
for (auto& s : {"MET_pt", "CaloMET_pt", "GenMET_pt", "RawMET_pt", "TkMET_pt"})
    h1->Fill(tas::GetF(s));
```
