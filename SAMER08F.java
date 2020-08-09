// SAMER08F - Feynman

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n;
	    while(true)
	    {
	        n=sc.nextInt();
	        if(n==0)
	        break;
	        n=((2*n*n+3*n+1)*n)/6;
	        System.out.println(n);
	    }
	}
}
