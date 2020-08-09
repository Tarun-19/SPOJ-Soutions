// CUTCAKE - Eat all the brownies !

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args){
		Scanner sc=new Scanner(System.in);
		int t;
		long i,n;
		t=sc.nextInt();
		while((t--)>0)
		{
		n=sc.nextLong();
	    if(n==1)
	    {System.out.println("0");
	    continue;}
	    n--;
	    i=0;
	    while(((i*i)+i)<=(n*2))
	    {
	        i++;
	    }
		System.out.println(i-1);
		}
	}
}
