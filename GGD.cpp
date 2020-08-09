// GGD - Mr Toothless and His GCD Operation

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t,n,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cin>>n;
	    cout<<"Case "<<i<<": ";
	    if(n==3)
	    cout<<"2 3"<<endl;
	    else if(n%2==0)
	    cout<<n/2<<" "<<n<<endl;
	    else
	    {n--;
	    cout<<n/2<<" "<<n<<endl;
	    }
	    
	}
	return 0;
}
