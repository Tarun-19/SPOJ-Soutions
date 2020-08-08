// JC15A - Windy Cannon

// Author: Tarun Kumar
// E-mail: tarunkumar281200@gmail.com

import java.util.*;
class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		
	int cp,tp,cbs,ws,dis;
	int q;
	String wd;
	float ans,speed=0;
	cp=sc.nextInt();
	tp=sc.nextInt();
	cbs=sc.nextInt();
	ws=sc.nextInt();
	wd=sc.next();
	dis=Math.abs((int)(cp-tp));
	if(dis==0)
	System.out.print("0.000000");
	else if(wd.equals("L"))
	{
	    if(tp<cp)
	    speed=ws+cbs;
	    else if(tp>cp)
	    speed=cbs-ws;
	    
	    if(speed<=0)
	    System.out.print("Impossible");
	    else{
	    ans=dis/speed;
	    
	    System.out.printf("%.6f",ans);
	    }
	}
	else
	{
	    if(tp<cp)
	    speed=ws-cbs;
	    else if(tp>cp)
	    speed=cbs+ws;
	    
	    if(speed<=0)
	    System.out.print("Impossible");
	    else{
	    ans=dis/speed;
	    
	    System.out.printf("%.6f",ans);
	    
	    }
	}
	}
}
