import java.util.Scanner;

class Arrayx
{

    public void Display(int arr1[], int size1, int arr2[], int size2)
{
   int newArr[] = new int[size1 + size2];
   int index = 0;

   for(int i = size2 - 1; i >= 0; i--)
   {
     newArr[index] = arr2[i];
     index++;
   }
   
   for(int i = size1 - 1; i >= 0; i--)
   {
     newArr[index] = arr1[i];
     index++;
   }

   System.out.println("new array is : ");
   for(int i = 0; i < newArr.length; i++)
   {
       System.out.print(newArr[i]+ " ");
   }
}

}

public class program4
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
        aobj.Display(arr1, size1, arr2 , size2);
    }   
}
