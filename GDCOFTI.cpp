// GDCOFTI - Greatest Common Divisor Of Three Integers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int gcd(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}

int main() {
	unsigned long long int a,b,c;
	cin>>a>>b>>c;
	cout<<gcd(gcd(a,b),c);
	return 0;
}
