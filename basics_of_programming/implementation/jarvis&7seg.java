    import java.util.Scanner;
     
    public class segment {
     
    public static int segmen_cal(int a)
    {
    if(a==1)
    return 2;
    else if(a==2)
    return 5;
    else if(a==3)
    return 5;
    else if(a==4)
    return 4;
    else if(a==5)
    return 5;
    else if(a==6)
    return 6;
    else if(a==7)
    return 3;
    else if(a==8)
    return 7;
    else if(a==9)
    return 6;
    else if(a==0)
    return 6;
     
    return 0;
     
     
    }
     
     
     
    public static void main(String args[])
    {
    Scanner in=new Scanner(System.in);
    int test=in.nextInt();
     
     
     
     
    while(test!=0)
    {
     
    int ar_size=in.nextInt();
     
     
    int sum=0;
    int low=999999999;
    int ans=-1;
     
     
    for(int i=0;i<ar_size;i++)
    {
    sum=0;
    String s=in.next();
     
    for(int j=0;j<s.length();j++)
    {
    int g=(int)s.charAt(j);
    sum=sum+segmen_cal( (g-48) );
    }
     
    if(sum<low)
    {
    low=sum;
    ans=Integer.parseInt(s);
    }
     
     
     
    }
     
    System.out.println(ans);
     
     
     
    test--;
    }
     
     
    }
     
    }
