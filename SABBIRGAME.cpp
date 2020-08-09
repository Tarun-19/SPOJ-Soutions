// SABBIRGAME - Sabbir and Game

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int n,i,x,s,y;
	while(t--)
	{
	    cin>>n;
	    s=0;
	    y=1000000000;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        s=s+x;
	        if(s<y)
	        y=s;
	    }
	    if(y<1)
	    cout<<-1*y+1<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
