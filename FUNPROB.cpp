// FUNPROB - Yanu in Movie theatre

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main(){
	long double n,m;
	while(1)
	{
	    cin>>n>>m;
	    if(!n&&!m)
	    break;
	    
	    if(!n)
	    {cout<<"1.000000\n";continue;}
	    if(!m||n>m)
	    {cout<<"0.000000\n";continue;}
	    
	    n=(m+1.0000-n);
	    n=n/(m+1);
	    
	    printf("%.6Lf\n",n);
	}
	return 0;
}
