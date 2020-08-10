// ANARC09B - Tiles of Tetris, Not!

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

long int gcd(long int a,long int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main() {
	long int l,b,x,hcf,lcm;
	while(1)
	{
	    cin>>l>>b;
	    if(l==0)
	    break;
	    if(l<b)
	    {x=l;l=b;b=x;}
	    hcf=gcd(l,b);
	    lcm=(l*b)/hcf;
	    cout<<lcm/hcf<<endl;
	}
	return 0;
}
