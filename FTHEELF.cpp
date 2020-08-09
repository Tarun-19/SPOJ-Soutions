// FTHEELF - Feanor The Elf

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double v,h;
	while(1)
	{
	cin>>v>>h;
	if(v==-1)
	break;
	v=(v/9.8)*sqrt((v*v)+(2*9.8*h));
	printf("%.6Lf\n",v);
	}
	
	return 0;
}
