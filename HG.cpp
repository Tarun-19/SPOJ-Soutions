// HG - HUGE GCD

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t;
		t=1;
		while((t--)>0)
		{
		    String s1,s2;
		    int n=sc.nextInt();
		    s1=sc.next();BigInteger f1=new BigInteger(s1);
		    n--;
		    while((n--)>0)
		    {
		        s2=sc.next();
    		    BigInteger f2=new BigInteger(s2);
    		    f1=f1.multiply(f2);
		    }
		    
		    String str1,str2;
		    int m=sc.nextInt();
		    str1=sc.next();BigInteger g1=new BigInteger(str1);
		    m--;
		    while((m--)>0)
		    {
		        str2=sc.next();
    		    BigInteger g2=new BigInteger(str2);
    		    g1=g1.multiply(g2);
		    }
		    
		    g1=g1.gcd(f1);
		    
		    String s=g1.toString();
		    int i,l;
		    l=s.length();
		    if(l>9)
		    {
		        for(i=l-9;i<l;i++)
		        System.out.print(s.charAt(i));
		    }
		    else
		    System.out.print(s);
		}
	}
}
