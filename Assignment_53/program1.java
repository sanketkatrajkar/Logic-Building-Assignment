package Assingment_53;
import java.util.*;

class ArrayX
{
    public void Display(int arr1[], int arr2[])
    {
       int sum1 = 0 , sum2 = 0;

       int Diff = 0;

       for(int i = 0; i < arr1.length; i++)
       {
          sum1 += arr1[i];
       }

       for(int j = 0; j < arr2.length; j++)
       {
          sum2 += arr2[j];
       }

       Diff = sum1 - sum2;

       System.out.println("Differce is : " + Diff);
    }
}

public class program1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int arr1[] = new int[2];
        int arr2[] = new int[2];

        System.out.println("Enter the first Array elmenet : ");
        for(int i = 0; i < arr1.length; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter the Second Array elmenet : ");
        for(int i = 0; i < arr1.length; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(arr1, arr2);
    }
}
