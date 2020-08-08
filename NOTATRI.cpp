// NOTATRI - Not a Triangle

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int n,i,j,k,c,x;
	while(1)
	{
	    scanf("%lld",&n);
	    if(!n)
	    break;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    
	    c=0;
	    sort(a,a+n);
	    
	    for(i=0;i<n-1;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            x=a[i]+a[j];
	            c+=n-(long long int)(upper_bound(a+j,a+n,x)-a);
	            
	        }
	        
	    }
	    
	  //  cout<<endl;
	    cout<<c<<endl;
	}
	return 0;
}
