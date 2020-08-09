// CANDY - Candy I

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	
	int i,s,n,x;
	while(1)
	{
	    s=0,x=0;
	    cin>>n;
	    if(n==-1)
	    break;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s=s+a[i];
	    }
	    if(s%n!=0)
	    {cout<<"-1\n";continue;}
	    s=s/n;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>s)
	        x=x+(a[i]-s);
	    }
	    cout<<x<<endl;
	    
	}
	return 0;
}
