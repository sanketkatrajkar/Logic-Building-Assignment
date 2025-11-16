import java.util.Scanner;

class Arrayx
{
    public void Display(int arr1[], int arr2[])
    {
       System.out.println("Element of first Array :");
       
       for(int i = 0; i < arr1.length; i++)
       {
          System.out.print(arr1[i] + " ");
       }

       System.out.println("Element of Second Array :");
       for(int i = 0; i < arr2.length; i++)
       {
          System.out.print(arr2[i] + " ");
       }
    } 
}

public class program1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first Array size : ");
        int size1 = sobj.nextInt();

        int arr1[] = new int[size1];
        for(int i = 0; i < size1; i++)
        {
            arr1[i] = sobj.nextInt();
        }

        System.out.println("Enter the second array size : ");
        int size2 = sobj.nextInt();

        int arr2[] = new int[size2];
        for(int i = 0; i < size2; i++)
        {
            arr2[i] = sobj.nextInt();
        }

        Arrayx aobj = new Arrayx();
        aobj.Display(arr1, arr2);

    }
    
}
