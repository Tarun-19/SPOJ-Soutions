// TEAM2 - A Famous ICPC Team

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    int i,j;
	unsigned long long int a[4],x,y=0;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3])
	{
	    y++;
	    cout<<"Case "<<y<<": ";
	    for(i=0;i<3;i++)
	    {
	        for(j=0;j<3-i;j++)
	        if(a[j]<a[j+1])
	        {
	            x=a[j];
	            a[j]=a[j+1];
	            a[j+1]=x;
	        }
	    }
	    cout<<(a[0]+a[1])<<endl;
	}
	return 0;
}
