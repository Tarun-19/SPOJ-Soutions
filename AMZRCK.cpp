// AMZRCK - Amz Rock

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include<iostream> 
using namespace std; 
int main(){

int t,i,a[48],n;


a[0]=0;a[1]=1;

for(i=2;i<48;i++)
{
a[i]=a[i-1]+a[i-2];
}
cin >> t;
for(i=0;i<t;i++)
{
	cin>>n;
	cout<<a[n+2]<<endl;
}
return 0;
}
