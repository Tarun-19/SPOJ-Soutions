// MAY99_3 - Easy Jug

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main() {
    short int t;
	int x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x<y)
	    {
	        z=x;
	        x=y;
	        y=z;
	    }
	    cin>>z;
	    if(z>x&&z>y)
	    {
	        cout<<"NO\n";
	        continue;
	    }
	    if(z%gcd(x,y)==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
