import java.util.Scanner;

public class String_Permutation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inputString = sc.next();
        sc.close();
        System.out.println("Permutations of " + inputString + " are:");
        permuteString(inputString, "");


    }
    public static void permuteString(String s, String current) {
        if (s.isEmpty()) {
            System.out.println(current);
        } 
        else {
            for (int i = 0; i < s.length(); i++) {
                String remainingChars = s.substring(0, i) + s.substring(i + 1);
                permuteString(remainingChars, current + s.charAt(i));
            }
        }
    }
}
