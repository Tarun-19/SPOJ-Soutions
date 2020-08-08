// IWGBS - 0110SS

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.math.BigInteger;
class GFG{
	public static void main (String[] args){
		Scanner sc=new Scanner(System.in);
		int i,n;
		n=sc.nextInt();
		if(n==1)
		{
		    System.out.print("2");
		}
		else
		{
		    BigInteger f1=new BigInteger("2");
		    BigInteger f2=new BigInteger("3");
		    for(i=2;i<=n;i++)
		    {
		        f2=f1.add(f2);
		        f1=f2.subtract(f1);
		    }
		    System.out.print(f1);
		}
	}
}
