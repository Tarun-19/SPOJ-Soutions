// UPDATEIT - Update the array !

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    long long int i,n,j,k,l,x,c,f,t,r,mx,u,val,q,fn;
    
    cin>>t;
    while(t--){
    
    cin>>n>>u;
    long long int a[n]={0};
    long long int diff[n+1]={0};
    while(u--)
    {
        cin>>l>>r>>val;
       // l--;r--;
        diff[l]+=val;
        diff[r+1]-=val;
    }
    
    mx=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        a[i]=diff[i];
        else
        a[i]=a[i-1]+diff[i];
     //   cout<<a[i]<<" ";
    }
    
    cin>>q;
    while(q--)
    {
        cin>>fn;
        
        cout<<a[fn]<<endl;
    }
    
    }
	return 0;
}
