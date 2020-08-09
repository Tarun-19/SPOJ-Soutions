// GR - Grand Reward

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main() {
	
	
	long long int t;
	    int n,c,d;
	    cin>>n>>t;
	    
	    if(t%4==0)
	    {
	        cout<<"Atef"<<endl;
	        c=1;
	        for(int i=1;i<=n;i++)
	        {
	            for(int j=1;j<=n;j++)
	            cout<<c++<<" ";
	            cout<<endl;
	        }
	    }
	    
	    else if(t%4==1)
	    {
	        cout<<"Sameh"<<endl;
	        c=(n*n)-n+1;
	        for(int i=1;i<=n;i++)
	        {
	            d=c;
	            for(int j=0;j<n;j++)
	            {
	                cout<<d<<" ";
	                d-=n;
	            }
	            cout<<endl;
	            c++;
	        }
	    }
	    
	    else if(t%4==2)
	    {
	        cout<<"Ameen"<<endl;
	        c=n*n;
	        for(int i=1;i<=n;i++)
	        {
	            d=c;
	            for(int j=0;j<n;j++)
	            {
	                cout<<d--<<" ";
	            }
	            c-=n;
	            cout<<endl;
	        }
	        
	        
	    }
	    else
	    {
	        cout<<"Shafeek"<<endl;
	        c=n;
	        for(int i=1;i<=n;i++)
	        {
	            d=c;
	            for(int j=0;j<n;j++)
	            {
	                cout<<d<<" ";
	                d+=n;
	            }
	            c--;
	            cout<<endl;
	        }
	    }
	return 0;
}
