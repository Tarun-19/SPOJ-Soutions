// TAP2013G - War

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int i,n,j,x,ans,c=0;
    cin>>n;
    long long int a[n],q[n];
    for(i=0;i<n;i++)
    cin>>q[i];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    sort(a,a+n);
    sort(q,q+n);
    x=0;
    for(i=0;i<n;i++)
    {
        if(q[x]<a[i])
        {
            x++;
            c++;
        }
    }
    
    cout<<c;
	return 0;
}
