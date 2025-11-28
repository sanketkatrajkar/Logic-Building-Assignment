package Assignment_55;

import java.util.*;

class Array 
{
    public int CountDifference(char Arr[])
    {
        int CountSmall = 0, CountCapital = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                CountSmall++;
            }

            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                CountCapital++;
            }
        }

        return CountCapital - CountSmall;
    }
}
public class program4 
{
   public static void main(String A[]) 
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Array of size of character Array : ");
      int size = sobj.nextInt();

      char Arr[] = new char[size];

      System.out.println("Enter the characters : ");
      for(int i = 0; i < size; i++)
      {
         Arr[i] = sobj.next().charAt(0); 
      }

      Array aboj = new Array();

      int iRet = aboj.CountDifference(Arr);

      System.out.println("Difference are : " + iRet);

   }
}
