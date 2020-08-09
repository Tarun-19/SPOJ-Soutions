// DANGER - In Danger

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int i,n,x,ans;
    char ch;
    
    while(1)
    {
        cin>>n>>ch>>x;
        
        if(n==0&&x==0)
        break;
        
        n=n*pow(10,x);
        
        x=log2(n);
        x=pow(2,x);
        
        
        n=n-x;
        ans=2*n+1;
        
        cout<<ans<<endl;
        
        
        
    }
	return 0;
}
