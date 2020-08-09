// EGYPIZZA - Pizza

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	int ans=1,x=0,y=0,z=0,a,b,n;
	cin>>n;
	char ch;
	while(n--)
	{
	    cin>>a>>ch>>b;
	    if(b==2)
	    y++;
	    else if(a==3)
	    z++;
	    else
	    x++;
	}
	
	ans=ans+z;
	x=x-z;
	
	ans=ans+(y/2);
	if(y%2==1)
	{
	    ans++;
	    x=x-2;
	}
	
	if(x>0)
	{
	    ans=ans+(x/4);
	    if(x%4!=0)
	    ans++;
	}
	
	
	cout<<ans;
	return 0;
}
