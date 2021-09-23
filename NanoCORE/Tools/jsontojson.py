##this script is so stupid but I didn't want to rewrite the goodrun proccessing and it was easier to change the text file in json format to a text file in text file format still called a json
##can i push to git anonymously
import os
import sys
import argparse
import json

parser = argparse.ArgumentParser()
parser.add_argument("--filename", help="filename")
args = parser.parse_args()


with open(args.filename) as f:
    data = json.load(f)
    print data.keys()
    
    grl = {}
    for j in data:
        for jj in data[j]:
            for i in xrange(len(jj)-1):
                grl[j] = str(jj[0]) + " " + str(jj[1])
     

    outname = args.filename.strip(".txt") + "_formatted.txt"
    
    outfile = open(outname, "w")
    for j in grl:
        outfile.write(str(j) + " " + str(grl[j]) + "\n")
    

