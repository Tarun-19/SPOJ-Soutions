# FACTMUL - Product of factorials

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

n=int(input())
i=int(1)
ans=int(1)
fct=int(1)
while(i<=n):
    fct=(fct*i)%109546051211
    ans=(ans*fct)%109546051211
    i=i+1
    if(ans==0):
        break
ans=ans%109546051211
print(ans)
