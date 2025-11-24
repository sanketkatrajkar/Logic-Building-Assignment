package Assignment_54;

import java.util.*;

class ArrayX
{
    public int CountCapital(char Arr[])
    {
        int iCount = 0;

        // Count capital letters
        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

public class program4
{
    public static void main(String A[])
    {
        ArrayX aobj = new ArrayX();

        Scanner sobj = new Scanner(System.in);
        char Arr[] = new char[5];

        System.out.println("Enter characters (50 characters):");

        // Correct loop for reading characters
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.next().charAt(0);  
        }

        int iRet = aobj.CountCapital(Arr);

        System.out.println("Number of capital characters: " + iRet);
    }
}
