// DIG - DIAGONAL

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
	unsigned long long int n,x,y,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    x=n;
	    y=24000000168;
	    x=x*(n-1);
	    x=x%y;
	    x=x*(n-2);
	    x=x%y;
	    x=x*(n-3);
	    x=x%y;
	    cout<<x/24<<endl;
	}
	return 0;
}
