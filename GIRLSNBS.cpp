// GIRLSNBS - Girls and Boys

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int b,g,mn,mx,x;
	
	while(1)
	{
	    cin>>b>>g;
	    if(b==-1)
	    break;
	    if(b<g)
	    {mn=b;mx=g;}
	    else
	    {mn=g;mx=b;}
	    
	    x=ceil((float)(mx/(float)(mn+1)));
	    
	    cout<<x<<endl;
	    
	    
	}
	return 0;
}
