# PARKET1 - PARKET

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

import math
r,b=map(int, raw_input().split())
x=(4+r+math.sqrt(16+r*r-8*r-16*b))/4
y=(b/(x-2))+2
print int(x),int(y)
