// AVLVKT - Lovely Kitty

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
float a[13][60];

void calcAngle(float h,float m,int i,int j)
{
    float an;
    an=fabs((60.0000*h)-(11.0000*m))/2.0000;
    
    if(an>180.0000)
    an=an-180.00;
    
    a[i][j]=an;
    
}


int main()
{
    int i,j,k,t,x,c=0,it;
    float n,h,m,err;
    
    
    for(i=0;i<=12;i++)
    {
        for(j=0;j<60;j++)
        {
            h=i;m=j;
            calcAngle(h,m,i,j);
        }
    }
    
    cin>>t;
    for(it=1;it<=t;it++){
    cin>>n;
    //n=it;
    err=1.0000/1200000000.0000;
    c=0;
    for(i=1;i<=12;i++)
    {
        for(j=0;j<60;j++)
        {
            if(abs(a[i][j]-n)<=err)
            c++;
        }
    }
    cout<<"Case "<<it<<": "<<c<<endl;}
    return 0;
}
