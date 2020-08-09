// FACEFRND - Friends of Friends

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
    int n,c=0,i,f,t;
    cin>>n;
    int a[10000]={0};
    for(i=1;i<=n;i++)
    {
        cin>>f;
        a[f]=-1000;
        
        cin>>t;
        while(t--)
        {
            cin>>f;
            a[f]++;
        }
    }
    
    for(i=0;i<10000;i++)
    {
        if(a[i]>0)
        c++;
    }
    cout<<c<<endl;
	return 0;
}
