//GPA1 - GRADE POINT AVERAGE

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

char subject[82];
int a[6],total=0,t,test=0,fl=0,n,l;
double gpa=0.0,att,as[5],internel,final;

int main()
{
	cin>>n;
	while(n--)
	{
	    
		fl=0;gpa=0;
		//test++;
		
		scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
		total=(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]);
		for(l=0;l<6;l++)
		{
			char sub1[10],sub2[10],sub3[10],sub4[10],sub5[10];
			scanf("%s %s %s %s %s",sub1,sub2,sub3,sub4,sub5);
    		as[0] = atof(sub1);//a[0,1,2]
    		as[1] = atof(sub2);
    		as[2] = atof(sub3);
    		as[3] = atof(sub4);//em
    		as[4] = atof(sub5);//at
    		
    		
			sort(as,as+3);
			internel = as[1] + as[2];
			internel = (internel * 9) / 8;
			final = as[3]/2;
			att = as[4];
			
			if(att < 51) 
				internel += 5;
			else if(att < 61) 
				internel += 4;
			else if(att < 71) 
				internel += 3;
			else if(att < 81) 
				internel += 2;
			else if(att < 91) 
				internel += 1;
			
			
			internel += final;
			double pt = 0;
			
			if(internel >= 91) 
				pt = (10 * a[l]);
			else if(internel >= 81) 
				pt = (9 * a[l]);
			else if(internel >= 71) 
				pt = (8 * a[l]);
			else if(internel >= 61) 
				pt = (7 * a[l]);
			else if(internel > 50) 
				pt = (6 * a[l]);
			else if(internel == 50) 
				pt = (5 * a[l]);
			else
			    fl = 1;
			
			if(pt == 0) 
				fl = 1;
			else 
				gpa += pt;
		}
		
		gpa=gpa/total;
		if(fl==1)
		printf("FAILED, %.2lf\n",gpa);
		else
		printf("PASSED, %.2lf\n",gpa);
	}
	return 0;
}
