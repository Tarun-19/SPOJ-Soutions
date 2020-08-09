// HPYNOS - Happy Numbers I

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
	unsigned long long int n,q;
	long long int sum=0,count=1;
	cin>>n;
	q=n;
	
	
	while(q>0)
    {
        sum=sum+((q%10)*(q%10));
        q=q/10;
    }
	
	
	q=sum;
	
	while(q>9)
	{
	    sum=0;
	    while(q>0)
        {
            sum=sum+((q%10)*(q%10));
            q=q/10;
        }
        count++;
  //      cout<<"pp";
        q=sum;
	}
	
	if(q==1)
	cout<<count;
	else
	cout<<"-1";
	return 0;
}
