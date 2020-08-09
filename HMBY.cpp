// HMBY - Hablu Wants to Buy

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main() {
	int a,b,c,d,e,w,t;
	cin>>a>>b>>c>>d>>e>>w;
	if(w%2!=0)
	cout<<"NO";
	else
	{
	    t=a*2+b*4+c*8+d*16+e*32;
	    if(t<w)
	    cout<<"NO";
	    else
	    cout<<"YES";
	}
	return 0;
}
