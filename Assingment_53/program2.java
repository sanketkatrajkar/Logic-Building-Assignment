package Assingment_53;

import java.util.*;

class ArrayX
{
    public void Display(int arr1[], int arr2[])
    {
       int min = arr1[0];
       int min2 = arr2[0];

       for(int i = 1; i < arr1.length; i++)
       {
         if(arr1[i] < min)
         {
            min = arr1[i];
         }
       }

       for(int j = 1; j < arr2.length; j++)
       {
         if(arr2[j] < min2)
         {
            min2 = arr2[j];
         }
       }

       System.out.println("Minimum in first array : " + min);
       System.out.println("Minimum in second array : " + min2);
    }
}
public class program2
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
