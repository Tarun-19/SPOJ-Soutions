// NSTEPS - Number Steps

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;

int main() {
	int t,x,y,c=0,d=2;
	int a1[10000],a2[10000];
	for(int i=0;i<10000;i++)
	{
	    a1[i]=c;
	    a2[i]=d;
	    if(i%2==0)
	    {c++;
	    d++;}
	    else
	    {c+=3;
	    d+=3;}
	}
	cin>>t;
	while((t--)>0)
	{
	    cin>>x>>y;
	    
	    if(y+2==x)
	    {
	        cout<<a2[y]<<endl;
	    }
	    else if(x==y)
	    {
	        cout<<a1[x]<<endl;
	    }
	    else
	    cout<<"No Number"<<endl;
	}
	return 0;
}
