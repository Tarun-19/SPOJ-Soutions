// PWRANDMOD - Power and Mod

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t;String s1,s2,e;
		t=sc.nextInt();
		while((t--)>0)
		{
		    s1=sc.next();
		    e=sc.next();
		    s2=sc.next();
		    BigInteger f1=new BigInteger(s1);
		    BigInteger f2=new BigInteger(s2);
		    BigInteger f3=new BigInteger(e);
		    f1=f1.modPow(f3,f2);
		    System.out.println(f1);
		}
	}
}
