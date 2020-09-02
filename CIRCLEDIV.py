// CIRCLEDIV - Euler Puzzle

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

from sys import stdin, stdout
t=int(stdin.readline())
i=int("1")
while(i<=t):
    n=int(stdin.readline())
    n=int(((n*n*n*n)-(6*n*n*n)+(23*n*n)-(18*n)+24)/24)
    n=n%1000000007
    print'Case','%d:'%i,n
    i=i+1
    
