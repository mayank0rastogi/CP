import java.util.*;

class Main

{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int [n];
        int i;
        for(i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        
        int temp[] = new int[n];
        for(i=0;i<n;i++)
        {
            temp[i]=arr[i];
        }
        
        int j;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(temp[j]>temp[j+1])
                {
                    int t=temp[j];
                    temp[j]=temp[j+1];
                    temp[j+1]=t;
                }
            }
        }
        
        for(i=0;i<n;i++)
        {
            int val=arr[i];
            for(j=0;j<n;j++)
            {
                if(val==temp[j])
                {
                    System.out.println(j+" ");
                }
            }
        }
    }
}
