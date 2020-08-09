// ENIGMATH - PLAY WITH MATH

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int rec(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
    return a;
    else
    return rec(b,a%b);
}
int main() {
	int t,f;
	cin>>t;
	while((t--)>0)
	{
	    unsigned long long int A,B,C,x,y;
	    f=0;
	    cin>>A>>B;
	    if(A<B)
	    {
	        C=A;
	        A=B;
	        B=C;
	        f=1;
	    }
	    
	    x=A/rec(A,B);
	    y=B/rec(A,B);
	    if(f==1)
	    cout<<x<<" "<<y<<endl;
	    else
	    cout<<y<<" "<<x<<endl;
	}
	return 0;
}
