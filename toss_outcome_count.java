public class toss_outcome_count {
    public static void main(String[] args) {
        int n = 3;
        // String ans = "";
        System.out.println(outcomes(n));
    }
    public static int outcomes(int n){
        if(n == 0){
            return 1;
        }
        int a = outcomes(n-1);
        int b = outcomes(n-1);
        return a + b;
    }
}
