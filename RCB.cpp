// RCB - Richest_Beggar

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main()
{
    long long int i,n,j,k,l,x,c,f,t,r,mx;
    cin>>n>>t;
    long long int a[n]={0};
    long long int diff[n+1]={0};
    while(t--)
    {
        cin>>l>>r;
        l--;r--;
        diff[l]+=1;
        diff[r+1]-=1;
    }
    
    mx=0;
    for(i=0;i<n;i++)
    {
        if(i==0)
        a[i]=diff[i];
        else
        a[i]=a[i-1]+diff[i];
        
        mx=max(mx,a[i]);
        //cout<<a[i]<<" ";
    }
    cout<<mx<<endl;
    for(i=0;i<n;i++)
    if(mx==a[i])
    cout<<i+1<<" ";
	return 0;
}
