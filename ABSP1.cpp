// ABSP1 - abs(a-b) I

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t;
	unsigned long long int n,i,s,p,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    p=0;s=0;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        p=p+(i*a[i]);
	        s=s+(a[i]*(n-i-1));
	    }
	    cout<<p-s<<endl;
	}
	return 0;
}
