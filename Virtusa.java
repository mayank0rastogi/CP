import java.util.*;

class Virtusa
{
    static void find(int n)
    {
        String str="";
        int remainder;
        while(n!=0)
        {
            remainder=n%5;
            str=str+remainder;
            n=n/5;
            
        }
        
        char ch[]=str.toCharArray();
        String rev="";
        for(int i=ch.length-1;i>=0;i--)
        {
            rev+=ch[i];
        }
        
        int output=Integer.parseInt(rev);
        
       System.out.println(output);
        
    }

  public static void main(String []args)
  {
      Scanner sc= new Scanner(System.in);
      int n;
      n=sc.nextInt();

      find(n);
      
      
  }
    
}
