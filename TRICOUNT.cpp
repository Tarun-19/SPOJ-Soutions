// TRICOUNT - Counting Triangles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t;
	unsigned long long int n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    n=(n*(n+2)*(2*n+1))/8;
	    cout<<n<<endl;
	}
	return 0;
}
