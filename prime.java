public class Prime {

    public void prime(int n) {
        boolean i= true;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                i = false;
                break;
            }
        }
        if (i)
        {
            System.out.println(n + " is a prime number");
        }
        else
        {
            System.out.println(n + " is not a prime number");
        }
    }
}
