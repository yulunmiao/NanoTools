#!/bin/bash

function col {
if [ $# -lt 1 ]; then
    echo "usage: col <col #>"
    return 1
fi
num=$1

if [[ $num -lt 0 ]]; then 
    awk "{print \$(NF+$((num+1)))}"
else
    awk -v x=$num '{print $x}'
fi
}

wget -q https://github.com/cmstas/CORE/raw/master/Tools/datasetinfo/scale1fbs.txt -O scale1fbs.txt

echo "# File was generated on " $(date) > scale1fbs_nanoaod.txt
printf '%-250s %-15s %-15s %-15s %-15s\n' "# NanoAOD dataset name" "n_events" "n_eff_events" "xsec" "scale1fb" >> scale1fbs_nanoaod.txt
for NANO in $(grep "NANOAODSIM" ../../../condor/samples.py | col 1 | tr -d '"' ); do
    NANODSNAME=$(echo $NANO | awk -F/ '{print $2}')
    NANODSCONFIG=$(echo $NANO | awk -F/ '{print $3}')
    NANODSCONFIGYEARINFO=$(echo $NANODSCONFIG | sed 's/NanoAOD.*//')
    # echo $NANODSNAME $NANODSCONFIGYEARINFO

    NMATCH=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO} | grep -v '#' | wc -l)
    MINIAODNAME=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO} | grep -v '#' | tail -n 1| col 1)
    NEVENTS=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO}| grep -v '#'  | tail -n 1| col 3)
    NEFFEVENTS=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO} | grep -v '#' | tail -n 1| col 4)
    XSEC=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO} | grep -v '#' | tail -n 1| col 5)
    SCALE1FB=$(grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO} | grep -v '#' | tail -n 1| col 6)
    # echo $MINIAODNAME $NEVENTS $NEFFEVENTS $XSEC $SCALE1FB

    # if [[ $NMATCH != *"1"* ]]; then
    #     echo "ERROR::: Found more than one match"
    #     echo $NMATCH
    #     grep ${NANODSNAME} scale1fbs.txt | grep ${NANODSCONFIGYEARINFO}
    # fi

    printf '%-250s %-15s %-15s %-15s %-15s\n' $NANO $NEVENTS $NEFFEVENTS $XSEC $SCALE1FB >> scale1fbs_nanoaod.txt
    # NANODSNAME=${NANO
    # MINI=$(dis_client.py -t parents $NANO | tr ' ' '\n' | grep MINIAODSIM | tr -d '[' | tr "'" ' ' | col 2)
    # echo $NANO $MINI
    # grep $MINI scale1fbs.txt
    # break
done
