// SINEGGS - Sinha and Eggs

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	long int n,x;
	while(t--)
		{
		cin>>n;
		x=(int)sqrt(n);
		if(x*x==n)
		cout<<"YES\n";
		else
		cout<<"NO\n";
		}
	return 0;
}
