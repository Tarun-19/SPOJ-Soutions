// BPM - Bipartite Permutation

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    int t,i=1;
    cin>>t;
    long long int n;
	while(i<=t)
	{
	    cout<<"Case "<<i<<": ";
	    i++;
	    cin>>n;
	    if(n==2)
	    {
	        cout<<"1\n";
	        continue;
	    }
	    n=n-5;
	    if(n%4==0||(n-1)%4==0)
	    {
	        cout<<"1\n";
	        continue;
	    }
	    cout<<"0\n";
	    
	}
	return 0;
}
