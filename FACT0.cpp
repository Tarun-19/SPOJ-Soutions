// FACT0 - Integer Factorization (15 digits)

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long long int n,x,i,y;
	while(1)
	{
	    cin>>n;
	    y=n;
	    if(n==0)
	    break;
	    for(i=2;i*i<=n;i++)
	    {
	        x=0;
	        while(n%i==0)
	        {
	            x++;
	            n=n/i;
	        }
	        if(x>0)
	        cout<<i<<"^"<<x<<" ";
	    }
	    if(n>=2)
	    cout<<n<<"^1 "<<endl;
	}
	return 0;
}
