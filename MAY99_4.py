# MAY99_4 - Rachu 

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

import math
n,r= map(int,raw_input().split())
x=int("1")
n=n-1
r=r-1
if(n<r):
    print("-1")
else:
    n=int(math.factorial(n))/int(math.factorial(n-r))
    r=int(math.factorial(r))
    n=int(n/r)
    print(n%10000007)
