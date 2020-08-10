// ADARAIN - Ada and Rain

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    long long int i,n,j,k,l,x,c,f,t,r,mx,u,val,q,fn,w;
    t=1;
    while(t--){
    
    cin>>n>>q>>w;
    // long long int a[n];
    long long int diff[1000010]={0};
    val=1;
    u=n;
    while(u--)
    {
        cin>>l>>r;
        diff[l]++;
        diff[r+1]--;
    }
    
    for(i=1;i<1000010;i++)
    {
        diff[i]+=diff[i-1];
    }
    
    while(q--)
    {
        cin>>fn;
        
        cout<<diff[fn]<<endl;
    }
    
    }
	return 0;
}
