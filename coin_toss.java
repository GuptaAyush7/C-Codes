public class coin_toss {
    public static void main(String[] args) {
        int n = 2;
        String ans = "";
        outcomes(n, ans);
    }
    public static void outcomes(int n, String ans){
        if(n == 0){
            System.out.println(ans);
            return;
        }
        outcomes(n-1, ans+"H");
        outcomes(n-1, ans+"T");
        return;
    }
}
