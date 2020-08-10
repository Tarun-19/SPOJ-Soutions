// APM - Abul and Prime Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	unsigned long long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==2)
	    {
	        cout<<"-1\n";
	        continue;
	    }
	    n=n-1;
	    n=n/2;
	    cout<<n+1<<" "<<n<<endl;
	}
	return 0;
}
