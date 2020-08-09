# GOODB - Good Predictions

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

import math
a,b,c,d= map(int,input().split())
a=int(math.factorial(a))
b=int(math.factorial(b))
c=int(math.factorial(c))
d=int(math.factorial(d))
b=int(b*c*d)
#a=int(a/c)
#a=int(a/d)
a=int(int(a)//int(b))
print(a%1000000007)
