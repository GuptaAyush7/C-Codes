public class subsequenceOfString {
    public static void main(String[] args) {
        String x = "abc";
        String ansStr = "";
        subsequence(x, ansStr);
    }
    public static void subsequence(String x, String ansStr){
        if(x.length() == 0){
            System.out.println(ansStr);
            return;
        }
        char ch = x.charAt(0);
        subsequence(x.substring(1), ansStr);
        subsequence(x.substring(1), ansStr + ch);
        return;
    }
}