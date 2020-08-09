# TRICENTR - Triangle From Centroid

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

import math
t=int(input())
while(t>0):
    t=t-1
    a,x,y,z=map(float,input().split())
    ar=3*0.5*a*x
    b=(0.5*a*x*2)/y
    c=(0.5*a*x*2)/z
    r=(a*b*c)/(4*ar)
    e=(a*a+b*b+c*c)/9
    d=2*(math.sqrt(abs(r*r-e)))
    print ("%.3f %.3f"%(ar,d))
