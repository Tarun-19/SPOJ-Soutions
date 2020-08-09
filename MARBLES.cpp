// MARBLES - Marbles

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

# include <bits/stdc++.h>
using namespace std;
long long int C[1000001];

long long int nCr(long long int n,long long int r)
{
    long long int i,j;
    r=min(r,n-r);
    memset(C,0,sizeof(C));
    
    C[0]=1;
    
    for(i=1;i<=n;i++)
    for(j=min(i,r);j>0;j--)
    C[j]=C[j]+C[j-1];
    
    return C[r]; 
}

int main()
{
    long long int t,n,r;
    scanf("%lld",&t);
    while(t--){
    
    scanf("%lld%lld",&n,&r);
    printf("%lld\n",nCr(n-1,r-1));
    
    }
    
	return 0;
}
