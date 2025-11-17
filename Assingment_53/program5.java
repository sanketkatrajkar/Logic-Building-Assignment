import java.util.*;

class Main
{
    // Method to check if a number is palindrome
     public static boolean isNumberPalindrome(int num) {
        int original = num;
        int rev = 0;

        while(num > 0) 
        {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        return original == rev;
    }
    // Method to check if array is palindrome
    public static boolean isArrayPalindrome(int arr[])
    {
        int start = 0;
        int end = arr.length - 1;

        while(start < end)
        {
            if(arr[start] != arr[end])
            {
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    // Method to check if ALL elements inside array are palindrome numbers
    public static boolean allElementsPalindrome(int arr[])
    {
        for(int i : arr)
        {
            if(!isNumberPalindrome(i))
            {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        // Accept first array
        System.out.println("Enter size of first array: ");
        int n1 = sc.nextInt();

        int arr1[] = new int[n1];
        System.out.println("Enter elements of first array:");
        for(int i = 0; i < n1; i++)
        {
            arr1[i] = sc.nextInt();
        }

        // CONDITION CHECKS
        boolean arrPalin = isArrayPalindrome(arr1);
        boolean numPalin = allElementsPalindrome(arr1);

        if(arrPalin && numPalin)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}
