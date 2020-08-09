// MFLAR10 - Flowers Flourish from France

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String s;
	    char ch,dh;
	    int i,f,l;
	    while(true)
	    {
	        f=0;
	        s=sc.nextLine();
	        if(s.equals("*"))
	        break;
	        l=s.length();
	        s=s.toLowerCase();
	        dh=s.charAt(0);
	        for(i=0;i<l;i++)
	        {
	            ch=s.charAt(i);
	            if(ch==' ')
	            {
	                if(s.charAt(i+1)!=dh)
	                {
	                    System.out.println("N");
	                    f=1;
	                    break;
	                }
	            }
	        }
	        if(f==0)
	        System.out.println("Y");
	    }
	}
}
