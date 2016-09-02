import java.util.*;
public class fact
{
public static void main(String ar[])throws Exception
{
Scanner sc=new Scanner(System.in);
int no=sc.nextInt();
for(int i=1;i<=no;i++)
{
fact*=i;
}
System.out.println("factorial of given number is:"+fact);
}
}
