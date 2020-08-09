//CRDS - Cards

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	unsigned long long int t,N;
	cin>>t;
	while((t--)>0)
	{
	    cin>>N;
	    N=((3*N*N)+N)/2;
	    cout<<(N%1000007)<<endl;
	}
	return 0;
}
