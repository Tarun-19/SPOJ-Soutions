// ADABANKET - Ada and Banquet

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    long long int i,n,ans=1000000000000,j,c,x;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            cin>>x;
            c+=x;
        }
        
        if(ans>c)
        ans=c;
        
    }
    cout<<ans+ans;
	return 0;
}
