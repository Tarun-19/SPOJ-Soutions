// ASCDFIB - Ascending Fibonacci Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
using namespace std;
int a[1100005];

int main()
{
    int i,n,j,k,l,it,t,r,c;
    
    
    a[1]=0;a[2]=1;
    
    for(i=3;i<1100005;i++)
    a[i]=(a[i-1]+a[i-2])%100000;
    
    cin>>t;
    for(it=1;it<=t;it++)
    {
        printf("Case %d: ",it);
        
        priority_queue<int,vector<int>,greater<int>> v;
        
        cin>>l>>r;
        
        for(i=l;i<=l+r;i++)
        v.push(a[i]);
        
        c=100;
        while(v.size()>0&&c>0)
        {
            c--;
            cout<<v.top()<<" ";
            v.pop();
        }
        
        cout<<endl;
        
    }
	return 0;
}
