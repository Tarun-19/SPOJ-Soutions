// CUTCAKE - Eat all the brownies !

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int t;
	unsigned long long int i,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==1)
	    {cout<<"0\n";
	    continue;}
	    n--;
	    i=0;
	    while(((i*i)+i)<=(n*2))
	    {
	        i++;
	    }
	    cout<<i-1<<endl;
	    
	}
	return 0;
}
