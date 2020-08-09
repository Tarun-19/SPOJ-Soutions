// UCV2013A - Counting Ids

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    long long int tmp,i,ans,x,y;
    while(1)
    {
        cin>>x>>y;
        if(!x&&!y)
        break;
        
        ans=0;tmp=1;
        
        for(i=1;i<=y;i++)
        {
            tmp=(tmp*x)%1000000007;
            ans=(ans+tmp)%1000000007;
        }
        
        
        cout<<ans%1000000007<<endl;
        
        
    }
	return 0;
}
