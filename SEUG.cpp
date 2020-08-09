// SEUG - Seetha’s Unique Game

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int x,y,t,n,i,a,b,c,w;
	cin>>t;
	while(t--)
	{
	    scanf("%lld%lld%lld%lld",&a,&b,&c,&w);
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    
	    y=0;
	    sort(a,a+n);
	    x=w;
	    for(i=n-1;i>=0;i--)
	    {
	        x+=a[i];
	        y++;
	        if(x>c)
	        break;
	    }
	    cout<<y<<endl;
	}
	return 0;
}
