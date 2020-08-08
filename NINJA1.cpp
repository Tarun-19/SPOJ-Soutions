// NINJA1 - Related or not

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,n,i,f;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    f=0;
	    long int a[n],b[n],c[n],y;
	    
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    y=min(a[0],b[0]);
	    
	    for(i=1;i<n;i++)
	    {
	        if(y>a[i]&&y>b[i])
	        {
	            f=1;
	            break;
	        }
	        else if(y<=a[i]&&y<=b[i])
	        y=min(a[i],b[i]);
	        else if(y<=a[i])
	        y=a[i];
	        else
	        y=b[i];
	    }
	    if(f)
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}
