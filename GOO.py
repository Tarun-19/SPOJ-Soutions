# GOO - Game Of Ones

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
while(t>0):
    n=int(input())
    if(n==1):
        print("1 1")
    else:
        m=pow(2,n-1)
        n=(pow(2,n-1))+(n-1)*pow(2,n-2)
        print (m,n)
    t=t-1
