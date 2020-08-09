// CNTDO - Count Doubles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int p,t,i,c,x,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    c=0;p=0;
	    
	    
	    for(i=0;i<n;i++)
	    {
	        if(binary_search(a,a+n,(2*a[i])))
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
