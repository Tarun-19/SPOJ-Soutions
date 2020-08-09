// LASTDIG2 - The last digit re-visited

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		String a,b,x;
		int t=sc.nextInt();
		while(t-->0)
		{
		    x="";
		    a=sc.next();
		    x=x+(a.charAt((a.length()-1)));
		    BigInteger f1=new BigInteger(x);
		    
		    b=sc.next();
		    BigInteger f2=new BigInteger(b);
		    
		    
		    f1=f1.modPow(f2,BigInteger.valueOf(10));
		    
		    System.out.println(f1);
		}
	}
}
