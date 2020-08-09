// FCTRL - Factorial

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int N,c=0,y=1;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	cin>>arr[i];
	for(int i=0;i<N;i++)
	{
	    while(1)
	    {
	        c+=arr[i]/pow(5,y);
	        if(arr[i]/pow(5,y)==0)
	        break;
	        y++;
	    }
	    cout<<c<<"\n";
	    c=0;
	    y=1;
	}
	return 0;
}
