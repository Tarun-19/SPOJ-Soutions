// OFFSIDE - He is offside!

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,d,i,n;
	while(1)
	{
	    cin>>n>>d;
	    if(n==0&&d==0)
	    break;
	    int a[n],b[d];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<d;i++)
	    cin>>b[i];
	    
	    sort(a,a+n);
	    sort(b,b+d);
	    
	    if(a[0]<b[1])
	    cout<<"Y\n";
	    else
	    cout<<"N\n";
	}
	return 0;
}
