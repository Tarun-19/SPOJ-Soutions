// MUL - Fast Multiplication

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.io.*;
import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t;
		t=sc.nextInt();
		while((t--)>0)
		{
		   String s1,s2;
		    s1=sc.next();
		    s2=sc.next();
		    BigInteger f1=new BigInteger(s1);
		    BigInteger f2=new BigInteger(s2);
		    BigInteger p=f1.multiply(f2);
		    System.out.println(p);
		}
	}
}
