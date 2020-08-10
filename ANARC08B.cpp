// ANARC08B - Adding Sevens

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <vector>
using namespace std;
long long int convert(long long int n)
{
    if(n==63)
    return 0;
    if(n==10)
    return 1;
    if(n==93)
    return 2;
    if(n==79)
    return 3;
    if(n==106)
    return 4;
    if(n==103)
    return 5;
    if(n==119)
    return 6;
    if(n==11)
    return 7;
    if(n==127)
    return 8;
    if(n==107)
    return 9;
}

string output(long long int x)
{
    if(x==0)
    return "063";
    if(x==1)
    return "010";
    if(x==2)
    return "093";
    if(x==3)
    return "079";
    if(x==4)
    return "106";
    if(x==5)
    return "103";
    if(x==6)
    return "119";
    if(x==7)
    return "011";
    if(x==8)
    return "127";
    if(x==9)
    return "107";
}

int main()
{
    long long int i,n,j,x,y,p,k,l;
    char ch;
    string s,tmp;
    while(1)
    {
        cin>>s;
        
        vector<char> v(s.begin(),s.end());
        
        if(v[0]=='B')
        break;
        
        tmp="";
        x=0;y=0;
        
        for(i=0;i<v.size();i++)
        {
            if(v[i]=='+')
            break;
            
            p=(v[i]-'0')*100+(v[i+1]-'0')*10+(v[i+2]-'0');
            
            i++;i++;
            x=x*10+convert(p);
            
            
        }
      //  cout<<"x="<<x<<" ";
        i++;
        for(;i<v.size();i++)
        {
            if(v[i]=='=')
            break;
            
            p=(v[i]-'0')*100+(v[i+1]-'0')*10+(v[i+2]-'0');
            i++;i++;
            y=y*10+convert(p);
            
        }
      //  cout<<"y="<<y<<" ";
        
        x=x+y;
      //  cout<<x<<endl;
        
        
        tmp="";
        while(x>0)
        {
            tmp=output(x%10)+tmp;
            x=x/10;
        }
        
        
        
        cout<<s<<tmp<<endl;
        
        
        
    }
	return 0;
}
