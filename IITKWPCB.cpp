// IITKWPCB - Check the coprimeness

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int gcd(unsigned long long int a,unsigned long long int b)
{
    if((b==0)&&(a==1))
    return 1;
    else if(b==0)
    return 0;
    else
    return gcd(b,a%b);
}

int main() {
	int t;
	unsigned long long int n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	     for(i=n/2;i>=1;i--)
   {
    if(gcd(n,i))
     {cout<<i<<endl;
     break;}
   }
	}
	return 0;
}
