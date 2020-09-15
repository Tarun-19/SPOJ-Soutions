// YUMMY - Yummy Triangular Pizza

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    FAST;
    ll i,t,n;
    ll a[]={0,1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016,1207477,3471067,9999135,28893560,83665729,242826187,706074369,2056870697,6001555275,17538335077,51323792789,150390053432};
    cin>>t;
    i=0;
    while(t--)
    {
        cin>>n;
        i++;cout<<"Case #"<<i<<": ";
        cout<<a[n]<<endl;
    }
	return 0;
}

