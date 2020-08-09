// HANGOVER - Hangover

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	float c,i,sum;
	int count;
	while(cin>>c)
	{
	    i=1;sum=0;count=0;
	    if(c==0)
	    break;
	    while(1)
	    {
	        i++;count++;
	        sum=sum+(1/i);
	        if(sum>=c)
	        break;
	    }
	    cout<<count<<" card(s)"<<endl;
	}
	
	return 0;
}
