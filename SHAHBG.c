// SHAHBG - SHAHBAG

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
int main()
{
    int q,i,x,cnt=0,j;
    scanf("%d",&q);
    int a[30001]={0};
    scanf("%d",&x);
    a[x]=1;
    cnt++;
    printf("%d\n",cnt);
    
    for(i=0;i<q-1;i++)
    {
        scanf("%d",&x);
        a[x]=1;
        
        if(!a[x+1]&&!a[x-1])
        cnt++;
        if(a[x+1]&&a[x-1])
        cnt--;
        
        
        printf("%d\n",cnt);
    }
    printf("Justice\n");
	return 0;
}
