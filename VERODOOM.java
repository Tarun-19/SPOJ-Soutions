// VERODOOM - Vero Dominoes

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
	Scanner sc=new Scanner(System.in);
	int t;
	String s;
	t=sc.nextInt();
	while(t-->0)
	{
	    s=sc.next();
	    BigInteger f=new BigInteger(s);
	    BigInteger m=(f.multiply(BigInteger.valueOf(2)).add(f.multiply(f.multiply(f)).add((f.multiply(f)).multiply(BigInteger.valueOf(3))))).divide(BigInteger.valueOf(2));
	    System.out.println(m);
	    
	}
	}
}
