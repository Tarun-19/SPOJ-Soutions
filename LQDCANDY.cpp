// LQDCANDY - CANDY

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	unsigned long long int n,t,x,c;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    x=ceil(log2(n));
	    
	    c=0;
	    if(n==0)
	    {
	        cout<<"0 0"<<endl;
	    }
	    else
	    {
	    while(n%2==0)
	    {
	        n=n/2;
	        c++;
	    }
	    c=x-c;
	    x=pow(2,x);
	    cout<<x<<" "<<c<<endl;
	    }
	}
	return 0;
}
