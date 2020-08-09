// PKPLOL - Lord of Light

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,i,n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cin>>n;
	    cout<<"Case "<<i<<": ";
	    if(n==0)
	    cout<<"abcdef"<<endl;
	    else if(n==1)
	    cout<<"bc"<<endl;
	    else if(n==2)
	    cout<<"abdeg"<<endl;
	    else if(n==3)
	    cout<<"abcdg"<<endl;
	    else if(n==4)
	    cout<<"bcfg"<<endl;
	    else if(n==5)
	    cout<<"acdfg"<<endl;
	    else if(n==6)
	    cout<<"acdefg"<<endl;
	    else if(n==7)
	    cout<<"abc"<<endl;
	    else if(n==8)
	    cout<<"abcdefg"<<endl;
	    else
	    cout<<"abcdfg"<<endl;
	}
	return 0;
}
