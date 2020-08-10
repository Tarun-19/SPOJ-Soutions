// ACMT - Acm Teams

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,e,n,x,y;
		t=sc.nextInt();
		while((t--)>0)
		{
		    x=0;
		    e=sc.nextInt();
		    n=sc.nextInt();
		    if(e<n)
		    {
		        x=e;e=n;n=x;
		    }
		    if(e>2*n)
		    x=n;
		    else
		    x=(n+e)/3;
		    System.out.println(x);
		}
	}
}
