// NITK06 - MODIFY SEQUENCE

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,n,f,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]<a[i+1])
	        {
	            a[i+1]-=a[i];
	            a[i]=0;
	        }
	        else if(a[i]>a[i+1])
	        {
	            a[i]-=a[i+1];
	            a[i+1]=0;
	        }
	        else
	        {
	            a[i]=0;
	            a[i+1]=0;
	        }
	    }
	    f=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]!=0)
	        {
	            f=1;
	            break;
	        }
	    }
	    if(f)
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
