// DOTAA - DOTA HEROES

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	
		int t;
		scanf("%d",&t);
		int c=0,twr,n,d;
	    while(t--)
	    {
	        c=0;
	        scanf("%d%d%d",&n,&twr,&d);
	        int arr[n];
	        for(int i=0;i<n;i++)
	        scanf("%d",&arr[i]);
	        for(int i=0;i<n;i++)
	        {
	           
	            while((arr[i]-d)>0)
	            {
	                c++;
	                arr[i]-=d;
	            }
	        }
	        
	        if(c>=twr)
	        cout<<"YES\n";
	        else
	        cout<<"NO\n";
	    }
	return 0;
}
