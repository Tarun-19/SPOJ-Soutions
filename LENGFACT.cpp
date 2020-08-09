// LENGFACT - Factorial length

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include<cmath>
using namespace std;
int main() {
	unsigned long long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==0||n==1||n==2||n==3)
	    {
	        cout<<"1\n";
	        continue;
	    }
	    n=ceil((n*log10(n/2.7182818284590452353))+((log10(2.00*3.141592653589793*n))/2.00));
	    cout<<n<<endl;
	}
	return 0;
}
