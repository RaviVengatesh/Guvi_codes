import java.util.*;
public class rev {

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        StringBuffer buff=new StringBuffer(str).reverse();
        String str1=buff.toString();
         System.out.println(str1);
        
    }
