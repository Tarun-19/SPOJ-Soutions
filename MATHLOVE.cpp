// MATHLOVE - Math is Love

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double y,d,n;
	int t;
	cin>>t;
	while((t--)>0)
	{
	    cin>>y;
	    d=1+(8*y);
	    d=sqrt(1+8*y);
	    n=(d-1)/2;
	    unsigned long long int x=n;
	    n=n*1000.00;
	    unsigned long long int y=x;
	    if(n>(x*1000))
	    cout<<"NAI"<<endl;
	    else
	        cout<<x<<endl;
	}
	return 0;
}
