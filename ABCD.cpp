// ABCD - Colours A, B, C, D

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int i,n;
    vector<char> v;
    cin>>n;
    n=n+n;
    char ch[n];
    
    for(i=0;i<n;i++)
    cin>>ch[i];
    
    i=0;
    if((ch[i]=='A'&&ch[i+1]=='B')||(ch[i+1]=='A'&&ch[i]=='B'))
    {
        v.push_back('C');
        v.push_back('D');
    }
    
    if((ch[i]=='A'&&ch[i+1]=='C')||(ch[i+1]=='A'&&ch[i]=='C'))
    {
        v.push_back('B');
        v.push_back('D');
    }
    if((ch[i]=='A'&&ch[i+1]=='D')||(ch[i+1]=='A'&&ch[i]=='D'))
    {
        v.push_back('B');
        v.push_back('C');
    }
    if((ch[i]=='B'&&ch[i+1]=='C')||(ch[i+1]=='B'&&ch[i]=='C'))
    {
        v.push_back('A');
        v.push_back('D');
    }
    if((ch[i]=='B'&&ch[i+1]=='D')||(ch[i+1]=='B'&&ch[i]=='D'))
    {
        v.push_back('A');
        v.push_back('C');
    }
    if((ch[i]=='C'&&ch[i+1]=='D')||(ch[i+1]=='C'&&ch[i]=='D'))
    {
        v.push_back('A');
        v.push_back('B');
    }
    
    
    
    
    
    
    
    
    
    
    
    for(i=2;i<n-1;i+=2)
    {
        
        if((ch[i]=='A'&&ch[i+1]=='B')||(ch[i+1]=='A'&&ch[i]=='B'))
        {
            if(v.back()!='C')
            {
                v.push_back('C');
                v.push_back('D');
            }
            else
            {
                v.push_back('D');
                v.push_back('C');
            }
        }
        
        if((ch[i]=='A'&&ch[i+1]=='C')||(ch[i+1]=='A'&&ch[i]=='C'))
        {
            if(v.back()!='B')
            {
                v.push_back('B');
                v.push_back('D');
            }
            else
            {
                v.push_back('D');
                v.push_back('B');
            }
        }
        
        if((ch[i]=='A'&&ch[i+1]=='D')||(ch[i+1]=='A'&&ch[i]=='D'))
        {
            if(v.back()!='B')
            {
                v.push_back('B');
                v.push_back('C');
            }
            else
            {
                v.push_back('C');
                v.push_back('B');
            }
        }
        
        if((ch[i]=='B'&&ch[i+1]=='C')||(ch[i+1]=='B'&&ch[i]=='C'))
        {
            if(v.back()!='A')
            {
                v.push_back('A');
                v.push_back('D');
            }
            else
            {
                v.push_back('D');
                v.push_back('A');
            }
        }
        if((ch[i]=='B'&&ch[i+1]=='D')||(ch[i+1]=='B'&&ch[i]=='D'))
        {
            if(v.back()!='A')
            {
                v.push_back('A');
                v.push_back('C');
            }
            else
            {
                v.push_back('C');
                v.push_back('A');
            }
        }
        
        if((ch[i]=='C'&&ch[i+1]=='D')||(ch[i+1]=='C'&&ch[i]=='D'))
        {
            if(v.back()!='A')
            {
                v.push_back('A');
                v.push_back('B');
            }
            else
            {
                v.push_back('B');
                v.push_back('A');
            }
        }
        
    }
    
    
    
    for(i=0;i<v.end()-v.begin();i++)
    cout<<v[i];
    
    
    
	return 0;
}
