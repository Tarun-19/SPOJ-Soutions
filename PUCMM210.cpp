// PUCMM210 - A Summatory

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	unsigned long long int i,n,t,y=0;
	unsigned long long int a[1000001];
	a[0]=0;
	for(i=1;i<1000001;i++)
	{
	    y=y+(i*i*i)%1000000003;
	    a[i]=(a[i-1]+y)%1000000003;
	}
	
	cin>>t;
	while(t)
	{
	    t--;
	cin>>n;
	cout<<a[n]<<endl;
	}

	return 0;
}
