// JULKA - Julka

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int t=10;
	String s;
	while(t-->0)
	{
	    s=sc.next();
	    BigInteger sum=new BigInteger(s);
	    s=sc.next();
	    BigInteger diff=new BigInteger(s);
	    BigInteger m=sum.add(diff);
	    m=m.divide(BigInteger.valueOf(2));
	    System.out.println(m);
	    m=sum.subtract(m);
	    System.out.println(m);
	}
	}
}
