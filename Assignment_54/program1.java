import java.util.*;

class MyArray
{
    public void ReverseArray(int arr[])
    {
        for(int i = 0; i < arr.length; i++)
        {
            int num = arr[i];
            int rev = 0;
            
            while(num != 0)
            {
                int digit = num % 10;
                rev = rev * 10 + digit;
                num = num / 10;
            }

            arr[i] = rev;
        }
    }
}

public class program1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter size of array: ");
        int size = sobj.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter array elements: ");
        for(int i = 0; i < arr.length; i++)
        {
            arr[i] = sobj.nextInt();
        }

        MyArray mobj = new MyArray();
        mobj.ReverseArray(arr);

        System.out.println("Output after reversing numbers: ");

        for(int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}
