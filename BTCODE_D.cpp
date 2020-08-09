// BTCODE_D - Maximum Profit

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int i,n,m,j,k,t,x,mx;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        long long int a[m][n],b[m][n],c[m][n];
        
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>b[i][j];
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>c[i][j];
        
        
        mx=0;
        for(i=0;i<m;i++)
        {
            x=0;
            for(j=0;j<n;j++)
            {
                x=max(x,c[i][j]*min(a[i][j],b[i][j]));
            }
            
            mx+=x;
            
        }
        
        cout<<mx<<endl;
    }
	return 0;
}
