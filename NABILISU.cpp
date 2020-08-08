// NABILISU - Billing Issue

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long int t,a,b,k,i=0;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>k;
	    b=b+k;
	    i++;
	    if(b==a&&k>0)
	    cout<<"Case "<<i<<": YES\n";
	    else
	    cout<<"Case "<<i<<": NO\n";
	}
	return 0;
}
