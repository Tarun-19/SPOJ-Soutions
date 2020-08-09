# GEOPROB - One Geometry Problem

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
while (t>0):
    t=t-1
    x,y,z=map(int,raw_input().split())
    x=2*y-x-z
    print x
