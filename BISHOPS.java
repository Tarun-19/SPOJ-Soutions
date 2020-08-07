//BISHOPS - Bishops
// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.io.*;
import java.util.*;
import java.math.BigInteger;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1;
		s1=sc.next();
		try{
		while(s1!=null)
		{
		    
		    if(s1.equals("1"))
		    {
		        System.out.println("1");
		        s1=sc.next();
		        continue;
		    }
		    BigInteger f1=new BigInteger(s1);
		    BigInteger f2=new BigInteger("1");
		    BigInteger f3=new BigInteger("2");
		    f1=f1.subtract(f2);
		    f1=f1.multiply(f3);
		    System.out.println(f1);
		    s1=sc.next();
		}}
		catch(Exception e){
		    
		}
	}
}
