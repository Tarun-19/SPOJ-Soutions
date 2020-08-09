// REBOUND - The return of the Cake

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long double n,x,y,z;
	unsigned long long int p;
	cin>>n;
	while(n--)
	{
	    cin>>x>>y>>z;
	    x=(x*z+z*sqrt(x*x+y*y+2.0*z*y));
	    x=x/(y+2.0*z);
	    p=x;
	    if(p!=x)
	    cout<<"Not this time."<<endl;
	    else
	    cout<<x<<endl;
	}
	
	return 0;
}
