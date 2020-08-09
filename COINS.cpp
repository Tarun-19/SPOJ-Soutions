// COINS - Bytelandian gold coins

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

unsigned long long int rec(unsigned long long int n)
{
    if((n/2+n/3+n/4)<=n)
    return n;
    return rec(n/2)+rec(n/3)+rec(n/4);
}

int main() {
	unsigned long long int n;
	
	while(cin>>n)
	cout<<rec(n)<<endl;
	    
	return 0;
}
