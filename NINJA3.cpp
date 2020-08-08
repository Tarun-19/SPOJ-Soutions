// NINJA3 - STUNNING GCD

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int gcd(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main() {
	int t;
	unsigned long long int a,b,n,s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>a>>b;
	    if(a<b)
	    {
	        s=a;a=b;b=s;
	    }
	    s=gcd(a,b);
	    while(s--)
	    cout<<n;
	    cout<<endl;
	}
	return 0;
}
