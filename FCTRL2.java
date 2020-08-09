// FCTRL2 - Small factorials

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,n;
		t=sc.nextInt();
		while((t--)>0)
		{
		    n=sc.nextInt();
		    BigInteger f1=new BigInteger("1");
		    while(n>=2)
		    f1=f1.multiply(BigInteger.valueOf(n--));
		    System.out.println(f1);
		}
	}
}
