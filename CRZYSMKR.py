# CRZYSMKR - Crazy Smoker

# Author: Tarun Kumar
# E-mail: tarunkumar281200@gmail.com

from sys import stdin, stdout
# t=int(raw_input())
t=int(stdin.readline())
while(t>0):
    t=t-1
    # n=int(raw_input())
    n=int(stdin.readline())
    n=(11-((n%11)*8)%11)%11
    print n
