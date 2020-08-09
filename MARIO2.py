# MARIO2 - Mario and Mushrooms

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
i=int("0")
while(i<t):
    i=i+1
    m,k=map(int,input().split())
    m=1.0/(1.0+m*k+k)
    print ("Case #%d: %.8f"%(i,m))
