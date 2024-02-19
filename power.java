public class power {
    public static void main(String[] args) {
        int x = 4;
        int n = 2;
        System.out.println(pow(x, n));
    }

    public static int pow(int x, int n){
        if(n <= 0){             //base case
            return 1;
        }
        int sp = pow(x, n-1);             //smaller problem
        return x*sp;
    }
}
