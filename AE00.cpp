// AE00 - Rectangles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i,c=0,x;
	cin>>x;
	while(x>0)
	{
	
	for(i=1;i<=sqrt(x);i++)
	{
	    if(x%i==0)
	    c++;
	}
	x--;
	
	
	}
	
	
	
	cout<<c;
	return 0;
}
