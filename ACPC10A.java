// ACPC10A - What’s Next

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		String a,b,c;
		while(1>0)
		{
		    a=sc.next();
		    b=sc.next();
		    c=sc.next();
		    BigInteger f1=new BigInteger(a);
		    BigInteger f2=new BigInteger(b);
		    BigInteger f3=new BigInteger(c);
		    
		    if((a.equals("0"))&&(c.equals("0")))
		    break;
		    
		    if((f3.subtract(f2)).equals((f2.subtract(f1))))
		    {
		        System.out.print("AP ");
		        System.out.println((f2.subtract(f1)).add(f3));
		    }
		    else
		    {
		        System.out.print("GP ");
		        System.out.println((f2.divide(f1)).multiply(f3));
		    }
		}
	}
}
