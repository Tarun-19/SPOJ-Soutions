// UCV2013C - Farmer Cream

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    
    unsigned long long int d,f,b,m;
	while(1)
	{
	    cin>>d>>f>>b>>m;
	    if(!d&&!f&&!b&&!m)
	    break;
	    
	    f=(((f*f)+f)/2)+1;
	    f=f*b+m;
	    
	    if(f>d)
	    cout<<"The firm is trying to bankrupt Farmer Cream by "<<f-d<<" Bsf."<<endl;
	    else
	    {
	    cout<<"Farmer Cream will have "<<d-f+m<<" Bsf to spend."<<endl;
	    }
	    
	}
	return 0;
}
