package Assignment_54;

import java.util.Scanner;

class ArrayX
{
    public void ReplaceSumDigit(int Arr[])
    {
        for(int i = 0; i < Arr.length; i++)
        {
            int num = Arr[i];
            int digit = 0, sum = 0;

            while(num != 0)
            {
                digit = num % 10;
                sum = sum + digit;
                num = num / 10;
            }

            Arr[i] = sum;
        }
    }
}


public class program2 
{
    public static void main(String A[])
    {
        ArrayX aobj = new ArrayX();

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter the element of array :");
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
        
        aobj.ReplaceSumDigit(Arr);

        System.out.println("Output after Sumation ");

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.print(Arr[i] + " ");
        }
    }
    
}
