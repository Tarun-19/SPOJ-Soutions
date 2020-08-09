// PRIME1 - Prime Generator

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;

bool prime(long long int n)
{
    if(n<2)
    return false;
    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}



int main() {
	int t;
	cin>>t;
	
	
	while((t--)>0)
	{
	    long long int m,n,i;
	    cin>>m>>n;
	    for(i=m;i<=n;i++)
	    {
	        if(prime(i))
	        cout<<i<<endl;
	    }
	    cout<<endl;
	}
	
	return 0;
}
