// INVCNT - Inversion Count

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define fab(i,a,b) for(i=a;i<=b;i++)
#define ln "\n"
using namespace std;

ll cnt;

void merge(ll a[],ll l,ll md,ll r)
{
    ll tmp[r-l+1];
    
    ll i=l,j=md+1,k=0;
    
    while(i<=md&&j<=r)
    {
        if(a[i]<=a[j])
        {
            tmp[k++]=a[i];
            i++;
        }
        else
        {
            tmp[k++]=a[j];
            j++;
            cnt+=(md-i+1);
        }
    }
    
    
    while(i<=md)
    {
        tmp[k++]=a[i];
        i++;
    }
    while(j<=r)
    {
        tmp[k++]=a[j];
        j++;
    }
    
    fab(i,l,r)
    a[i]=tmp[i-l];
}


void merge_sort(ll a[],ll l,ll r)
{
    if(l<r)
    {
        ll md=(l+r)/2;
        
        merge_sort(a,l,md);
        merge_sort(a,md+1,r);
        
        merge(a,l,md,r);
    }
}

int main()
{
    FAST;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        fab(i,0,n-1)
        cin>>a[i];
        cnt=0;
        
        
        merge_sort(a,0,n-1);
        
        cout<<cnt<<ln;
    }
	return 0;
}
