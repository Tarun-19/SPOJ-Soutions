// TWOSQRS - Two squares or not two squares

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <cmath>
using namespace std; 
bool sumSquare(unsigned long long int n) 
{
    unsigned long long int f=0,i,j,a,b;
    
    for(i=0;i<(sqrt(n)+1);i++)
    {
        a=n-(i*i);
        b=(int)sqrt(a);
        if(((b*b)+(i*i))==n)
        {
            f=1;
            break;
        }
    }
    if(f)
    return true;
    else
    return false;
}
int main()
{ 
    unsigned long long int n;
    int t;
    cin>>t;
    while(t--){
    cin>>n;
    if(sumSquare(n)) 
    cout<<"Yes\n"; 
    else
    cout<<"No\n";
}}
