// HAMSTER1 - Hamster flight

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    long double v,k1,k2,ang,x,y;
    cin>>t;
    while(t--)
    {
        cin>>v>>k1>>k2;
        
        ang=(3.14159265-atan(((4*k1)/k2)))/2.0;
        
        x=(k1*v*v*sin(2.0*ang))/10.0;
        y=(k2*v*v*sin(ang)*sin(ang))/20.0;
        
        printf("%.3Lf %.3Lf\n",ang,x+y);
    }
	return 0;
}
