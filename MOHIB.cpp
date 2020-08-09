// MOHIB - Mohib and series

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,x,a,n;
	cin>>t;
	while(t--)
	{
	    cin>>x>>a;
	    n=a-x;
	    a=(a*(n+1))-x;
	    n=((n*n)-n)/2;
	    cout<<(a-n)<<endl;
	}
	return 0;
}
