// IITWPC4B - Maggu and Triangles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long int t;
	unsigned long long int a;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    if(a%2==0)
	    a=a*a;
	    else
	    a=(a+3)*(a+3);
	    
	    if(a%48<24)
	    cout<<a/48<<endl;
	    else
	    cout<<a/48+1<<endl;
	}
	return 0;
}
