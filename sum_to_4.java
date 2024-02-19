public class sum_to_4 {
    public static void main(String[] args) {
        dice(4, "");
    }
    public static void dice(int n, String ans){
        if(n == 0){
            System.out.println(ans);
            return;
        }
        if(n < 0){
            return;
        }
        for(int dic = 1; dic <= 3; dic++){
            dice(n - dic, ans + dic);
        }
    }
}
