// AP2 - AP - Complete The Series (Easy)

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	unsigned long long int i,a,d,n,t,l,L,sum;
	cin>>t;
	while((t--)>0)
	{
	cin>>l>>L>>sum;
	n=(sum*2)/(l+L);
	d=(L-l)/(n-5);
	a=l-d*2;
	cout<<n<<"\n";
	for(i=1;i<=n;i++)
	{
	    cout<<a<<" ";
	    a=a+d;
	}
}
	return 0;
}
