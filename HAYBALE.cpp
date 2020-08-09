// HAYBALE - Haybale stacking

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i,n,j,k,l,x,c,f,t,r,mx,u,val,q,fn;
    
    
    cin>>n>>k;
    long long int a[n]={0};
    long long int diff[n+1]={0};
    while(k--)
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
     //   cout<<a[i]<<" ";
    }
    
    sort(a,a+n);
    
    cout<<a[n/2];
    
	return 0;
}
