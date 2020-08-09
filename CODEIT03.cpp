// CODEIT03 - Play with Dates

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>

using namespace std;
int main(){
	int t,d,m,y,k,j,h;
	cin>>t;
	string day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	while(t--)
	{
	    cin>>d>>m>>y;
	    
	    if(m<3)
	    {
	        m+=12;y--;
	    }
	    k=y%100;
	    j=y/100;
	    m=(13*(m+1))/5;
	    
	    k=k+(k/4);
	    j=(j/4)+(5*j);
	    
	    h=(d+m+k+j)%7;
	    cout<<day[h]<<"\n";
	    
	}
	return 0;
}
