package Assignment_55;

import java.util.Scanner;

class Array 
{
    public int CountVowel(char Arr[], int size)
    {
        int count = 0;

        for(int i = 0; i < size; i++)
        {
            char ch = Character.toLowerCase(Arr[i]);

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                count++;
            }
        }

        return count;
    }
}

public class prgram2
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of character array : ");
        int size = sobj.nextInt();

        char Arr[] = new char[size];

        System.out.println("Enter the elements of character array : ");
        for(int i = 0; i < size; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }

        Array aobj = new Array();
        int Ret = aobj.CountVowel(Arr, size);

        System.out.println("Number of Vowels are : " + Ret);
    } 
}
