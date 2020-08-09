// EC_CONB - Even Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

unsigned int reverseBits(unsigned int n) 
{ 
    unsigned int rev = 0; 
    while (n > 0) 
    { 
        rev <<= 1; 
        if (n & 1 == 1) 
        rev ^= 1; 
        n >>= 1; 
    } 
    return rev; 
}

int main()
{
    unsigned int i,n,k,l,x,c,ans;
    cin>>x;
    while(x--)
    {
        cin>>n;
        ans=n;
        if(n%2==0)
        {
            ans=reverseBits(n);
        }
        
        cout<<ans<<"\n";
    }
	return 0;
}
