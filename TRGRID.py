# TRGRID - Traversing Grid

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
while(t>0):
    t=t-1
    n, m=map(int,input().split())
    if (n<=m):
        if(n%2==0):
            print('L')
        else:
            print('R')
    else:
        if(m%2==0):
            print('U')
        else:
            print('D')
            
