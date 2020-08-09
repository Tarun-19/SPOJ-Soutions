// DOL - Largest Odd Divisor

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    long long int n;
	    cin>>n;
	    while(n%2==0)
	    n=n/2;
	    cout<<"Case "<<i<<": "<<n<<endl;
	    
	}
	return 0;
}
