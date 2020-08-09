// EIGHTS - Triple Fat Ladies

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    int t;
	unsigned long long int k;
	cin>>t;
	while(t--)
	{
	        cin>>k;
         	k=192+((k-1)*250);
         	cout<<k<<endl;
    }
	return 0;
}
