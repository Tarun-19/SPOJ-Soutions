// ARMY - Army Strength

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main() {
	int a,b,t;
	int x;
	cin>>t;
	while(t--)
	{
	    int l=-1,L=-1;
	    cin>>a>>b;
	    while(a--)
	    { cin>>x;
	    if(x>l)
	    l=x;
	    }
	    while(b--)
	    {
	        cin>>x;
	        if(x>L)
	        L=x;
	    }
	    if(l>=L)
	    cout<<"Godzilla\n";
	    else
	    cout<<"MechaGodzilla\n";
	}
	return 0;
}
