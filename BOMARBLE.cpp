// BOMARBLE - D - Playing with Marbles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int n,i,x;
	while(1)
	{
	    x=5;
	    cin>>n;
	    if(n==0)
	    break;
	    if(n==1)
	    cout<<x<<endl;
	    else
	    {
	        for(i=2;i<=n;i++)
	        x=x+(3*i)+1;
	        cout<<x<<endl;
	    }
	}
	return 0;
}
