// HACKRNDM - Hacking the random number generator

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	long long int i,c,k,n;
	scanf("%lld%lld",&n,&k);
	long long int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	
	c=0;
	for(i=0;i<n;i++)
	{
	    if(binary_search(a+i,a+n,k+abs(a[i])))
	    {
	        c++;
	    }
	}
	cout<<c<<endl;
	return 0;
}
