Q1)

b.  
6 cores per socket -
cmd used - more /proc/cpuinfo and verfied it with lscpu

c.
6 processor -
cmd used - more /proc/cpuinfo and verfied it with lscpu

conclusion no hyperthreading in my system - thread(s) per core 1

d.
2611.39MHz

e.
x86_64

f.
physical memory - 4040256 KB
cmd used - vmstat -s

g.
free memory - 3312608 KB
cmd used - vmstat -s

h.
no. of forks - 3107
no. of ctxt switches - 234585 

Q2)

a.
PID - 3686

b.
CPU utilization - 99.7%
Memory - 0.0%

c.
current state - running

Q4)
memory1 -
Virtual Memory Space alloted - 8300 KB
Physical Memory Space alloted - 748 KB
memory2 -
Virtual Memory Space alloted - 8304 KB
Physical Memory Space alloted - 3248 KB

since memory2 access the virtual page for every location on array it should be backed by a 
physical location on RAM and for that page fault occurs everytime it does that. Hence it gets
alloted significantly more physical memory than memory1 process.
