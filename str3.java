import java.util.Scanner;
public class str1 {
	
  

		public static void main(String[] args) {
			Scanner in=new Scanner(System.in);
			String s1=in.nextLine();
			String s2=in.nextLine();
			if(s1.contains(s2))
			{
				String ch[]=s1.split(" ");
				int count=s1.indexOf(s2);
				System.out.println(count);
				
			}
			else
			{
				System.out.println("it does not contain's the substring");
			}
			

		}

	}
