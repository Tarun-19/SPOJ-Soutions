// ICANDIES - Candies

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    int i,n,t,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": ";
        n-=5;
        while(n>0)
        {
            if(n%3==0)
            break;
            n-=5;
        }
        
        if(n<=-1)
        cout<<"-1"<<endl;
        else
        cout<<n<<endl;
    }
	return 0;
}
