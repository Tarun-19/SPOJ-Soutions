# FAST2 - Fast Sum of two to an exponent

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    n=(pow(2,n+1))-1
    n=n%1298074214633706835075030044377087
    print(n)
