public class printNextLineDecreasing {
    public static void main(String[] args) {
        int n = 5;
        printNextLine(n);
    }
    
    public static void printNextLine(int n){
        if(n==0){
            return;
        }
        System.out.println(n);
        printNextLine(n-1);
    }
}
