public class firstOccurenceInArray {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 2, 4, 6, 3, 7};
        int num = 3;
        int occurence = firstOccurence(arr, num, 0);
        System.out.println(occurence);
    }

    public static int firstOccurence(int arr[], int num, int i) {
        if ( arr.length == i){
            return -1;
        }
        if ( arr[i] == num){
            return i;
        }
        int sp = firstOccurence(arr, num, i+1);
        return sp;
    }
}
