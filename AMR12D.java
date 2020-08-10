// AMR12D - The Mirror of Galadriel

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
import java.io.*;
class GFG{
    
    int rev(String m)
    {
        String str="";
        for(int i=0;i<m.length();i++)
        str=m.charAt(i)+str;
        if(str.equals(m))
        return 1;
        else
        return 0;
    }
    
	public static void main (String[] args) {
	    int t;
	    Scanner sc=new Scanner(System.in);
	    t=sc.nextInt();
	    while(t>0)
	    {
	        t--;
	        if(t==-1)
	        break;
	        String s=sc.next();
	        GFG obj=new GFG();
	        int p=obj.rev(s);
	        if(p==1)
	        System.out.println("YES");
	        else
	        System.out.println("NO");
	    }
	}
}
