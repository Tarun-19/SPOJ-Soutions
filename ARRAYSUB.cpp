// ARRAYSUB - subarrays

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
    int n,i,k,j,max;
    cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	for(i=0;i<n-k+1;i++)
	{
	    max=a[i];
	    for(j=0;j<k;j++)
	    {
	        if(max<a[j+i])
	        max=a[j+i];
	    }
	    cout<<max<<" ";
	}
	return 0;
}
