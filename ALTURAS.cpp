// ALTURAS - Alturas de NoMeAcuerdo

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	long long int w=0,m=0,c=0,i=0,h;
	long long int a[2000]={0};
	while(1)
	{
	    cin>>h;
	    if(h==0)
	    break;
	    else
	    {
	        a[i++]=h;
	        w++;
	    }
	}
	
	while(1)
	{
	    cin>>h;
	    if(h==0)
	    break;
	    else
	    {
	        a[i++]=h;
	        m++;
	    }
	}
	
	sort(a,a+2000);
	
	c=0;
	for(i=0;i<2000;i++)
	{
	    if(a[i]==a[i+1])
	    {
	        a[i]=0;
	    }
	}
	
	for(i=0;i<2000;i++)
	{
	    if(a[i]!=0)
	    {
	        cout<<a[i]<<" ";
	        c++;
	    }
	}
	
	
	
	
	cout<<" \n"<<w<<"\n"<<m<<"\n"<<c;
	
	return 0;
}
