//PLAYGAME - PLAYGAME

#include <stdio.h>
int main() {
int t;
unsigned long long int n;
scanf("%d",&t);
while(t--)
{
	scanf("%llu",&n);
	if(n%3==1)
	printf("Hemlata\n");
	else if(n%3==2)
	printf("Hemlata\n");
	else
	printf("Ragini\n");
}
	return 0;
}
