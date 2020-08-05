//ABA12D - Sum of divisors!

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long int arr[]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281};
    long int i,a,b,t,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=0;
        for(i=0;i<38;i++)
        if(arr[i]<=b&&arr[i]>=a)
        c++;
        
        cout<<c<<endl;
    }
	return 0;
}
