// UFPR14D - Inquire

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int n,i,t,s,x,y;
	cin>>n;
	int a[n+1]={-1};
	for(i=1;i<=n;i++)
	cin>>a[i];
	cin>>t;
	while(t--)
	{
	    s=0;
	    cin>>x>>y;
	    for(i=x;i<=y;i++)
	    s=s+a[i];
	    cout<<s<<endl;
	}
	return 0;
}
