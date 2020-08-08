// IITKWPCO - Create Collections

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int a[10000000]={0};
int main()
{
    long long int i,n,t,cnt,x;
    cin>>t;
    while(t--)
    {
        memset(a, 0, sizeof(a));
        scanf("%lld",&n);
        
        long long int arr[n];
        cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
            a[arr[i]]+=1;
        }
        sort(arr,arr+n);
        
        for(i=0;i<n;i++)
        {
            x=arr[i];
            if(a[x]==0)
            continue;
            
            if(a[2*x])
            {
                cnt++;
                a[x]--;
                a[2*x]--;
            }
            
        }
        
        printf("%lld\n",cnt);
    }
	return 0;
}
