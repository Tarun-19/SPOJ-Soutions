// BEENUMS - Beehive Numbers

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    float x;
    while(1)
    {
        cin>>n;
        if(n==-1)
        break;
        n=n-1;
        if(n%6!=0)
        {
            cout<<"N"<<endl;
            continue;
        }
        n=n/6;
        
        x=(-1+sqrt((1+(8.00*n))))/2.00;
        n=x;
        if(x==n)
        cout<<"Y"<<endl;
        else
        cout<<"N\n";
        
    }
	return 0;
}
