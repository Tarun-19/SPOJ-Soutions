# NITT2 - hai jolly jolly jolly

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    if((n%252==0)and(n%525==0)):
        print 'Yes Yes'
    elif((n%252==0)and(n%525!=0)):
        print 'Yes No'
    if((n%252!=0)and(n%525==0)):
        print 'No Yes'
    elif((n%252!=0)and(n%525!=0)):
        print 'No No'
