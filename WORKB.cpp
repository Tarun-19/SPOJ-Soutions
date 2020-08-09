// WORKB - Working in Beijing

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    long long int t,n,i,x,ans,c,j=1,a,b;
    cin>>t;
    while(j<=t)
    {
        cout<<"Case #"<<j++<<": ";
        cin>>n>>a>>b;
        long long int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        
        ans=2*a+b;
        for(i=1;i<n;i++)
        {
            x=arr[i]-arr[i-1]-1;
            
            if(x*b<2*a)
            ans+=((x+1)*b);
            else
            ans=ans+2*a+b;
        }
        
        cout<<ans<<endl;
    }
	return 0;
}
