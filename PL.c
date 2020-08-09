// PL - Palindrome Lover

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <stdio.h>
#include <string.h>
int main()
{
    char ch[1000000];int l,i,c;
	while(scanf("%s",ch)!=EOF)
	{    int a[123]={0};c=0;
	    l=strlen(ch);
	    for(i=0;i<l;i++)
	    {
	        a[(char)ch[i]]++;
	    }
	    
	    for(i=97;i<123;i++)
	    {
	        if((a[i]+a[i-32])%2==1)
	        c++;
	    }
	    if((c==1&&l%2==1)||(c==0))
	    printf("1\n");
	    else
	    printf("-1\n");
	}
	
	return 0;
}
