// OEN - One Eight_Nine

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	long int t,i;
	int n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	    cin>>n;
	    cout<<"Case "<<i<<": ";
	    if(n<9)
	    cout<<9-n<<endl;
	    else
	    cout<<18-n<<endl;
	}
	return 0;
}
