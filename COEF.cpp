// COEF - Coeficientes

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int x,n,k;
	int a[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
	while(cin>>n>>k)
	{
	    n=a[n];
	    while(k--)
	    {
	        cin>>x;
	        n=n/a[x];
	    }
	    cout<<n<<endl;
	}
	return 0;
}
