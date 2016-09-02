public class revint {
 
        public static void main(String[] args) {
              Scanner sc=new Scanner(System.in);
              int n=sc.nextInt();
                int rem,res=0;
                while(n>0){
                        rem=n%10;
                        n=n/10;
                        res=rem+res*10;
                        }
                        System.out.println(res);
                }
        }
}
