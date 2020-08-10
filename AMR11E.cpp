// AMR11E - Distinct Primes

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449};
	
	long long int a[1000000]={0};
	long long int x,i,c;
	
	for(i=30;i<1000000;i++)
	{
	    c=0;x=0;
	    while(1)
	    {
	        if(i%p[x]==0)
	        c++;
	        
	        if(c>2)
	        {
	            a[i]=1;
	            break;
	        }
	        if(x==86)
	        break;
	        x++;
	    }
	}
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
	    i=0;
	    scanf("%lld",&n);
	    while(n)
	    {
	        if(a[i++]==1)
	        n--;
	    }
	    printf("%lld\n",i-1);
	}
	
	return 0;
}
