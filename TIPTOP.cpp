// TIPTOP - Tip Top Game

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,i;
	unsigned long long n,x;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cout<<"Case "<<i<<": ";
	    cin>>n;
	    x=(int)sqrt(n);
	    if((x*x)==n)
	    cout<<"Yes\n";
	    else
	    cout<<"No\n";
	}
	return 0;
}
