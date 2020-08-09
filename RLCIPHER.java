// RLCIPHER - Robert Langdon & Cipher

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG
{
    static int func(int x)
    {
        if(x>=7)
        return -4;
        if(x<0)
        return x;
        if(x==0||x==3||x==4||x==6)
        return -4;
        if(x==1||x==5)
        return -3;
        return -2;
    }
	public static void main (String[] args){
		Scanner sc=new Scanner(System.in);
		int t,n,i,x;
		t=sc.nextInt();
		while((t--)>0)
		{
		    n=sc.nextInt();
		    int a[]=new int[n];
		    for(i=0;i<n;i++)
		    {
		        x=sc.nextInt();
		        a[i]=func(x);
		    }
		    for(i=0;i<n;i++)
		    System.out.print(a[i]+" ");
		    System.out.println();
		}
	}
}
