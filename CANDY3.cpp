// CANDY3 - Candy III

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	unsigned long long int t,x,n,i,s;
	cin>>t;
	while(t--)
	{
	    s=0;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    {
	        cin>>x;
	        s=(s+x)%n;
	    }
	    if(s%n==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
