// CRZYSMKR - Crazy Smoker

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main() {
		unsigned long long int t;
	cin>>t;
	while((t--)>0)
	{
	    unsigned long long n;
	    cin>>n;
	    cout<<(11-((n%11)*8)%11)%11<<endl;
	          
	}	
	return 0;
}
