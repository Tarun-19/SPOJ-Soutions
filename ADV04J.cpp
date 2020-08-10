// ADV04J - Invisible point

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include<iostream>
using namespace std;
int main()
{
    long int t,ans,n;
    cin>>t;
    while(t!=0)
    {
        ans=0;
        cin>>n;
        while(1)
        {
            if(n==3)
            {
                ans=ans+3;
                break;
            }
            else if(n==4)
            {
                ans=ans+3;
                break;
            }
            else if(n==5)
            {
                ans=ans+4;
                break;
            }
            
            ans++;
            if(n%2==0)
            n=n/2;
            else
            n=n/2+1;
        }
        
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
