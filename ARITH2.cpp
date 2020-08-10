// ARITH2 - Simple Arithmetics II

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
unsigned long long int operate(unsigned long long int a,unsigned long long int b,char ch)
{
    if(ch=='+')
    return a+b;
    if(ch=='-')
    return a-b;
    if(ch=='*')
    return a*b;
    if(ch=='/')
    return (unsigned long long int)(a/b);
}

int main(){
	unsigned long long int n,a,b,ans,p,t;
	char ch;
	cin>>t;
	while(t--)
	{
	    
	    cin>>a;
	    cin>>ch;
	    cin>>b;
	    ans=operate(a,b,ch);
	    
	    
	    
	    while(1)  //eof  || ' '
	    {
	        cin>>ch;
	        if(ch=='=')
	        break;
	        cin>>b;
	        ans=operate(ans,b,ch);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
