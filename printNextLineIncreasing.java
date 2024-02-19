public class printNextLineIncreasing {
    public static void main(String[] args) {
        int n = 5;
        printNextLine(n);
    }
    
    public static void printNextLine(int n){
        if(n==0){
            return;
        }
        printNextLine(n-1);
        System.out.println(n);
    }
}
