// WILLITST - Will it ever stop

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	    long long int n;
	    cin>>n;
	    if(n<2)
	    cout<<"TAK";
	    else
	    {
	        while((n%2==0)&&(n!=0))
	        n=n/2;
	        if(n==1)
	        cout<<"TAK";
	        else
	        cout<<"NIE";
	    }
	return 0;
}
