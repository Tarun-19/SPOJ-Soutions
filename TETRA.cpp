// TETRA - Sphere in a tetrahedron

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std;
long double area(long double a,long double b,long double c)
{
    long double s;
    s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
        long double t,u,v,w,V,U,vol,S,W;
        cin>>t;
        while(t--)
        {
        cin>>u>>v>>w>>W>>V>>U;
        S=0;
        S=area(u,V,w)+area(W,u,v)+area(W,V,U)+area(U,v,w);
      
        vol=sqrt(4*u*u*v*v*w*w- u*u*(v*v+w*w - U*U)*(v*v+w*w-U*U) - v*v*(w*w+u*u - V*V)*(w*w+u*u-V*V) - w*w*(u*u + v*v - W*W)*(u*u+v*v-W*W) + (v*v +w*w - U*U)*(w*w+u*u- V*V)*(u*u+v*v - W*W))/12;
        printf("%.4Lf\n",vol*3.0/S);
        }
        return 0;
}
