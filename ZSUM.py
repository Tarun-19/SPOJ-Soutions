#ZSUM - Just Add It

import math
while(True):
    n,k=map(int,raw_input().split())
    if(n==0 and k==0):
        break
    a=pow(n,k,10000007)
    b=2*pow(n-1,n-1,10000007)
    c=pow(n,n,10000007)
    d=2*pow(n-1,k,10000007)
    print((a+b+c+d)%10000007)
