// CUBES - Perfect Cubes

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

#include <iostream>
using namespace std;
int main()
{
	unsigned long long int l,i,j,k;
	
	for(i=6;i<=100;i++)
	{
	    for(j=2;j<=i;j++)
	    {
	        for(k=j+1;k<=i;k++)
	        {
	            for(l=k+1;l<=i;l++)
	            {
	                if((i*i*i)==(k*k*k+j*j*j+l*l*l))
	                printf("Cube = %llu, Triple = (%llu,%llu,%llu)\n",i,j,k,l);
	            }
	        }
	    }
	}
	return 0;
}
