// FAKETSP - Traveling Salesman

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double x,y,s=0,x2,y2;
	char ch;
	while(1)
	{
	    cin>>ch;
	    if(ch=='(')
	    break;
	}
	cin>>x>>ch>>y;
	
	while(1)
	{
	    if(!(cin>>ch))
	    break;
	    if(ch=='(')
	    {
	        cin>>x2>>ch>>y2;
	        s=s+sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
	        x=x2;y=y2;
	        printf("The salesman has traveled a total of %.3Lf kilometers.\n",s);
	    }
	}
	return 0;
}
