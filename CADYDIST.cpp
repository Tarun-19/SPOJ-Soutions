// CADYDIST - Candy Distribution

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	unsigned long long int n,i,t,s;
	while(1)
	{
	    cin>>n;
	    if(n==0)
	    break;
	    s=0;
	    unsigned long long int a[n];
	    unsigned long long int b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    sort(b,b+n,greater<int>());
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    s=s+a[i]*b[i];
	    cout<<s<<endl;;
	}
	return 0;
}
