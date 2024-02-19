public class lastOccurenceInArray {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 2, 4, 6, 3, 7};
        int num = 3;
        int occurence = lastOccurence(arr, num, arr.length - 1);
        System.out.println(occurence);
    }

    public static int lastOccurence(int arr[], int num, int i) {
        if ( arr.length < 0){
            return -1;
        }
        if ( arr[i] == num){
            return i;
        }
        int sp = lastOccurence(arr, num, i-1);
        return sp;
    }    
}
