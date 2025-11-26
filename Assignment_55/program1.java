package Assignment_55;

import java.util.*;

class MyArray
{
    public void ReplaceCapital(char Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Arr[i] = (char)(Arr[i] - 32);
            }
        }
    }
}

public class program1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of characters : ");
        int size = sobj.nextInt();

        char Arr[] = new char[size];

        System.out.println("Enter the characters one by one : ");

        for(int i = 0; i < size; i++)
        {
            Arr[i] = sobj.next().charAt(0);  // read single char
        }

        MyArray mobj = new MyArray();
        mobj.ReplaceCapital(Arr);

        System.out.println("Array after conversion : ");
        for(char c : Arr)
        {
            System.out.print(c + " ");
        }
    }
}
