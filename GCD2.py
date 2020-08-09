# GCD2 - GCD2

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

import math
t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    a=math.gcd(a,b)
    print (a)
