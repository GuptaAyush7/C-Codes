public class sum_to_4_count {
    public static void main(String[] args) {
        System.out.println(dice(10));
    }
    public static int dice(int n){
        if(n == 0){
            return 1;
        }
        if(n < 0){
            return 0;
        }
        int count = 0;
        for(int dic = 1; dic <= 6; dic++){
            count += dice(n - dic);
        }
        return count;
    }
}
