// HARISH_PUZZLE - Harish and his rooks puzzle

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,i,j,r=0,c,f=0;
	char ch[8][8];
	cin>>t;
	while(t--)
	{
	    f=0;c=0;
	    for(i=0;i<8;i++)
	    {
	        for(j=0;j<8;j++)
	        {
	            cin>>ch[i][j];
	        }
	    }
	    
	    for(i=0;i<8;i++)
	    {
	        
	        for(j=0;j<8;j++)
	        {
	            if(ch[i][j]=='R')
	            r++;
	            if(ch[j][i]=='R')
	            c++;
	        }
	        if(r!=1||c!=1)
	        {
	            cout<<"NO\n";
	            f=1;
	            i=8;
	        }
	        r=0;c=0;
	    }
	    
	    
	    
	    if(f!=1)
	    cout<<"YES\n";
	}
	
	
	return 0;
}
