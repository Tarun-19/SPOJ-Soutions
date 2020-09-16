// NECSTASY - Ecstasy

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double d,x,y,tha,tmp,pi=acos(-1);
    while(cin>>d>>x>>y)
    {
        cin>>tha;
        
        tha=(pi*tha)/360.0;
        tmp=sin(tha);
        tmp=(d-y)/tmp;
        tmp+=x;
        
        printf("%.2Lf\n",tmp);
    }
	return 0;
}

