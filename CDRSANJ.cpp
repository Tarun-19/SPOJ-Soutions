// CDRSANJ - CODER FIRST PROBLEM

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    int num;
	cin>>num;
	if(num==0||num==1||num==2)
	cout<<num;
	else
	{
	    int c=0,n=num;
	    while(n%2==0)
	    {
	        c++;
	        n=n/2;
	    }
	    cout<<2*c;
	}
	return 0;
}
