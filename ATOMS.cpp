// ATOMS - Atoms in the Lab

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned long long int n,k,m,t=0;
	    cin>>n>>k>>m;
	    while(k<=m/n)
	    {
	        n=n*k;
	        t++;
	    }
	    cout<<t<<endl;
	}
	return 0;
}
