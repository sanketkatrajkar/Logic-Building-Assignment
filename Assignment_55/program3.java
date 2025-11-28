package Assignment_55;

import java.util.Scanner;

class  Array 
{
    // public int CountOccurence(char Arr[], char ch)
    // {
    //     int count = 0;

    //     for(int i = 0; i < Arr.length; i++)
    //     {
    //         if(Arr[i] == ch)
    //         {
    //             count++;
    //         }
    //     }

    //     return count;
    // }

    public int CountOccurence(char Arr[], char ch)
{
    int count = 0;

    // convert search character to lowercase manually
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = (char)(ch + 32);
    }

    for(int i = 0; i < Arr.length; i++)
    {
        char temp = Arr[i];

        // convert array element to lowercase manually
        if(temp >= 'A' && temp <= 'Z')
        {
            temp = (char)(temp + 32);
        }

        if(temp == ch)
        {
            count++;
        }
    }

    return count;
}
}


public class program3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of characters Array : ");
        int size = sobj.nextInt();
        char Arr[] = new char[size];

        System.out.println("Enter the one by one characters : ");

        for(int i = 0; i < size; i++)
        {
            Arr[i] = sobj.next().charAt(0);
        }

        System.out.println("Enter the character that you want to be seach :");
        char ch = sobj.next().charAt(0);

        Array aobj = new Array();

        int iRet = aobj.CountOccurence(Arr, ch);

        System.out.println("Occurence of character is : "+ iRet);

    }

}
