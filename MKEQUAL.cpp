// MKEQUAL - Make them equal !

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,n,i,s,x;
	cin>>t;
	while(t--)
	{
	    s=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        s=s+x;
	    }
	    
	        if(s%n==0)
	    cout<<n<<endl;
	    else
	    cout<<n-1<<endl;
	}
	
	
	return 0;
}
