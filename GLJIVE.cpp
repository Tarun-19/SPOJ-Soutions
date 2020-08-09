// GLJIVE - GLJIVE

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int i,a[10],s=0,c,f=0;
	for(i=0;i<10;i++)
	cin>>a[i];
	
	for(i=0;i<10&&f==0;i++)
	{
	    if(abs(s-100)<abs(100-(s+a[i])))
		f=1;
		else
	    s=s+a[i];
	}
	
	cout<<s;
	
	return 0;
}
