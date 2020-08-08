// NFACTOR - N-Factorful

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include <iostream>
using namespace std;
int ans[1000001][11]={0};
int main()
{
    int n,i,j,x,c,t,a,b;
    FAST;
    int cnt[1000001]={0};
	
	
	for(i=2;i<1000001;i++)
	{
		if(cnt[i]==0)
		{
			for(j=i;j<1000001;j=j+i)
		    cnt[j]++;
		}
	}
	
// 	for(i=0;i<1501;i++)
// 	{
	   // cout<<i<<" = "<<cnt[i]<<"\n";///
// 	}
	
	
	
	for(i=0;i<11;i++)
	{
	    ans[0][i]=0;
	}
	for(i=1;i<1000001;i++)
	{
	    for(j=0;j<11;j++)
	    {
	        if(cnt[i]==j)
	        ans[i][j]=ans[i-1][j]+1;
	        else
	        ans[i][j]=ans[i-1][j];
	    }
	}
	
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>a>>b>>n;
        /*for(i=a;i<=b;i++)
        {
            if(cnt[i]==n)
            {
                c++;
                // cout<<i<<" ";
            }
        }*/
        // cout<<"\n";
        //  cout<<c<<"\n\n";
        cout<<ans[b][n]-ans[a-1][n]<<endl;
    }
	return 0;
}
