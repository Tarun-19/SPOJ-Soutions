// MRECAMAN - Recaman’s Sequence

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int a[5000001]={0};
bool x[100000000];
int main()
{
    long long int p,i,n;
    
    for(i=0;i<100000000;i++)
    x[i]=false;
    
	a[0]=0;a[1]=1;a[2]=3;
	x[0]=true;x[1]=true;x[3]=true;
	for(i=3;i<5000001;i++)
	{
	    p=a[i-1]-i;
	    if(p>0&&!x[p])
	    a[i]=a[i-1]-i;
	    else
	    a[i]=a[i-1]+i;
	    x[a[i]]=true;
	}
/*	for(i=0;i<30;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(i=0;i<30;i++)
	cout<<x[i]<<" ";*/
	while(1)
	{
	    cin>>n;
	    if(n==-1)
	    break;
	    cout<<a[n]<<endl;
	}
	return 0;
}
