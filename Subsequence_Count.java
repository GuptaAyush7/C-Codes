public class Subsequence_Count {
    public static void main(String[] args) {
        String x = "abc";
        System.out.println(subsequence(x));
    }
    public static int subsequence(String x){
        if(x.length() == 0){
            return 1;
        }
        int a = subsequence(x.substring(1));
        int b = subsequence(x.substring(1));
        return a + b;
    }
}
