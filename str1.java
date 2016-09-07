import java.util.Scanner;

public class str1 {
	public static void main(String[]args){
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		if(s.length()%2==0){
			String s1=s.substring(0, s.length()/2);
			String s2=s.substring(s1.length(),s.length());
			char c1[]=s1.toCharArray();
			char c2[]=s2.toCharArray();
			int count=0;
			for(int i=0;i<s1.length();i++){
				for(int j=0;j<s2.length();j++){
				if(c1[i]==c2[j]){
					count++;
				}
				}
			}
			if(count==s.length()/2){
				System.out.println("double string");
			}
			else{
				System.out.println("not a double string");
			}
		}
		else{
			System.out.println("not a double string");
		
		}
		
		
	}
}
