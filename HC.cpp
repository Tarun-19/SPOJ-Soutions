// HC - Happy Coins

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	string s;
	int t,n,c,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    c=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>s;
	        if(!s.compare("lxh"))
	        c++;
	    }
	    
	    if(c%2==1)
	    cout<<"lxh\n";
	    else
	    cout<<"hhb\n";
	}
	
	
	return 0;
}
