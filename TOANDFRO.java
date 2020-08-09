// TOANDFRO - To and Fro

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
	    int row,col=1,i,j,f=0;
	    Scanner sc=new Scanner(System.in);
	    while(col!=0)
	    {
	        col=sc.nextInt();
	        if(col==0)
	        break;
	        String s=sc.next();int x=0;
	        row=(s.length())/col;
	        char c[][]=new char[row][col];
	        
	        for(i=0;i<row;i++)
	        {
	            if(i%2==0)
	            {for(j=0;j<col;j++)
	            {c[i][j]=s.charAt(x);
	             x++;}}
	            else{
	            for(j=col-1;j>=0;j--)
	            {c[i][j]=s.charAt(x);
                 x++;}}
	        }
	        for(i=0;i<col;i++)
	        for(j=0;j<row;j++)
	        System.out.print(c[j][i]);
	        System.out.println();
	    }
	}
}
