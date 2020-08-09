// BWIDOW - Black Widow Rings

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int t;
	t=sc.nextInt();
	while(t!=0)
	{
	    t--;
	    int R1=0,r1=0;
	int n,i,c=0;
	    n=sc.nextInt();
	    int r[]=new int[n];
	    int R[]=new int[n];
	    for(i=0;i<n;i++)
	    {
	        r[i]=sc.nextInt();
	        R[i]=sc.nextInt();
	        if(r1<r[i])
	        {
	            r1=r[i];
	            c=i;
	        }
	        if((R1<R[i])&&(c!=i))
	        R1=R[i];
	    }
	    if(r1>R1)
	    System.out.println(c+1);
	    else
	    System.out.println("-1");
	}
	}
}
