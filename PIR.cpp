// PIR - Pyramids

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double u,v,w,U,V,W,x,y,z;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>u>>W>>V>>v>>w>>U;
        x=(v*v)+(w*w)-(U*U);
        y=(w*w)+(u*u)-(V*V);
        z=(u*u)+(v*v)-(W*W);
        x=(4*u*u*v*v*w*w)-(u*u*x*x)-(v*v*y*y)-(w*w*z*z)+(x*y*z);
        x=(sqrt(x))/12.000;
        printf("%.4Lf\n",x);
    }
	return 0;
}
