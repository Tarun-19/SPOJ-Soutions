// OPMODULO - "Operation - Modulo"

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long int l,r,i=-1,x=-1,sum=0;
	cin>>l>>r;
	while(1)
	{
	    i++;
	    if((pow(2,i)>=l)&&(pow(2,i)<=r))
	    { 
	        x=pow(2,i);
	        break;
	    }
	    if(pow(2,i)>r)
	    break;
	}

	while((x<=r)&&(x!=-1))
	{
	    sum=sum+x;
	    x=x*2;
	}
	if(sum<0)
	cout<<"0";
	else
	cout<<sum;
	
	
	return 0;
}
