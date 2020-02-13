#!/bin/bash

echo "#threads,exec_time,speedup" > "$2.speedups.csv"    #1st output line
../CircuitRouter-SeqSolver/CircuitRouter-SeqSolver $2    #solve sequentially
SEQ_SECONDS=$(grep 'Elapsed time' $2.res | cut -c19-26)  #get seq. time
echo 1S,$SEQ_SECONDS,1 >> $2.speedups.csv                #seq data to table

#Solve using par. version, n times.Use -t argument from 1 to n
for (( i=1; i<=$1; i++ ))
do
   ./CircuitRouter-ParSolver -t $i $2                            #solve
   PAR_SECONDS=$(grep 'Elapsed time' $2.res | cut -c19-26)       #get time
   speedup=$(echo "scale=6; ${SEQ_SECONDS}/${PAR_SECONDS}" | bc) #get speedup
   echo $i,$PAR_SECONDS,$speedup >> $2.speedups.csv              #output to table
done
