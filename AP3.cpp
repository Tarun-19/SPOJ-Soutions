// AP3 - AP - Complete The Series v2

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	unsigned long long int a,sum,i,n,l;
	long double D,d;
	cin>>t;
	while(t--)
	{
	    cin>>a>>l>>sum;
	    D=sqrtl(pow((5.00*l+7.00*a+2.00*sum),2.00)-(a+l)*48.00*sum);
	    n=llrint(((5.00*l+7.00*a+2.00*sum)+D)/(2.00*(a+l)));
	    d=llrint((l-a)/(n-6.00));
	    
	    a=llrint(a-2.00*d);
	    cout<<n<<endl;
	    for(i=0;i<n;i++)
	    cout<<llrint(a+(i*d))<<" ";
	    
	    
	    cout<<endl;
	}
	return 0;
}
