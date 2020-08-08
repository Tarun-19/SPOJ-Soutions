// NY10A - Penney Game

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
		int t,i,j,l,x;
		int s1,s2,s3,s4,s5,s6,s7,s8;
		String str,tmp;
		String[] s={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		for(i=1;i<=t;i++)
		{
		    x=sc.nextInt();
		    s1=0;s2=0;s3=0;s4=0;s5=0;s6=0;s7=0;s8=0;
		    System.out.print(i+" ");
		    str=sc.next();
		    l=str.length();
		    
		    for(j=0;j<l-2;j++)
		    {
		        tmp="";
		        tmp=tmp+str.charAt(j)+str.charAt(j+1)+str.charAt(j+2);
		        if(tmp.equals(s[0]))
		        s1++;
		        else if(tmp.equals(s[1]))
		        s2++;
		        else if(tmp.equals(s[2]))
		        s3++;
		        else if(tmp.equals(s[3]))
		        s4++;
		        else if(tmp.equals(s[4]))
		        s5++;
		        else if(tmp.equals(s[5]))
		        s6++;
		        else if(tmp.equals(s[6]))
		        s7++;
		        else
		        s8++;
		    }
		    System.out.println(s1+" "+s2+" "+s3+" "+s4+" "+s5+" "+s6+" "+s7+" "+s8+" ");
		}
}}
