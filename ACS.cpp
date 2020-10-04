// ACS - A concrete simulation

#include <iostream>
using namespace std;
int main()
{
    char ch;
    long long int n,x,y,tmp,i,j,k,r[1234],c[5678],z;
    for(i=0;i<1234;i++)
    r[i]=i;
    for(i=0;i<5678;i++)
    c[i]=i;
    
    while(cin>>ch)
    {
        
        if(ch=='R')
        {
            cin>>x>>y;
            swap(r[x-1],r[y-1]);
            continue;
        }
        
        if(ch=='C')
        {
            cin>>x>>y;
            swap(c[x-1],c[y-1]);
            continue;
        }
        
        if(ch=='Q')
        {
            cin>>x>>y;
            cout<<5678*r[x-1]+c[y-1]+1<<endl;
            continue;
        }
        
        
        if(ch=='W')
        {
            cin>>z;
            z--;
            
            x=z/5678;
            y=z%5678;
            
            for(i=0;i<5678;i++)
            if(y==c[i])
            break;
            
            for(j=0;j<1234;j++)
            if(x==r[j])
            break;
            
            cout<<j+1<<" "<<i+1<<endl;
        }
        
    }
	return 0;
}
