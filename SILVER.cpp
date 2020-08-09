// SILVER - Cut the Silver Bar

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n,i;
	while(cin>>n)
	{
	    i=1;
	    if(n==0)
	    break;
	    if(n==1)
	    {cout<<"0\n";continue;}
	    while(1)
	    {
	        i++;
	        if(n<pow(2,i))
	        {
	            cout<<(i-1)<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
