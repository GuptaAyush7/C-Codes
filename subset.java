import java.util.Scanner;

public class subset {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the String");
        String str = scanner.nextLine();
        scanner.close();
        System.out.println("Count of 'hi' not followed by 't': " + countHi(str));
        System.out.println("String after removing 'hi' not followed by 't': " + removeHi(str));
        System.out.println("String after replacing 'hi' not followed by 't' with 'bye': " + replaceHi(str));
    }

    public static int countHi(String str) {
        if (str.isEmpty()) {
            return 0;
        }

        if (str.charAt(0) == 'h' && str.charAt(1) == 'i' && (str.length() < 3 || str.charAt(2) != 't')) {
            return 1 + countHi(str.substring(2));
        }

        return countHi(str.substring(1));
    }

    public static String removeHi(String str) {
        if (str.isEmpty()) {
            return "";
        }

        if (str.charAt(0) == 'h' && str.charAt(1) == 'i' && (str.length() < 3 || str.charAt(2) != 't')) {
            return removeHi(str.substring(2));
        }

        return str.charAt(0) + removeHi(str.substring(1));
    }

    public static String replaceHi(String str) {
        if (str.isEmpty()) {
            return "";
        }

        if (str.charAt(0) == 'h' && str.charAt(1) == 'i' && (str.length() < 3 || str.charAt(2) != 't')) {
            return "bye" + replaceHi(str.substring(2));
        }

        return str.charAt(0) + replaceHi(str.substring(1));
    }
}