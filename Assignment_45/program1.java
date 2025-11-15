///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
///////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1   Accetp the number from user and display the Interchanging the 
                       row and columns of matrix 

                  Q2    Accetp the number from user and display Reverse content of each row. 
 */

/*
         Q 1:   3  2  5  9
                4  3  2  2
                8  4  1  5
                3  9  7  5
    
    Output Q1:  3  4  8  3
                2  3  4  9
                5  2  1  7
                9  2  5  5

    Output Q2:  3  4  8  3
                2  3  4  9
                5  2  1  7
                9  2  5  5

*/
import java.util.*;

class Matrix
{
   private int Arr[][];

   public Matrix(int A , int B)
   {
       Arr = new int[A][B];
   }

   public void Accept()
   {
      System.out.println("enter the elemenets of matrix");

      Scanner sobj = new Scanner(System.in);

      int i = 0, j = 0;

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            Arr[i][j] = sobj.nextInt();
        }
      }
   }

   public void Display()
   {
      System.out.println("elemenets of matrix are : ");

      int i = 0, j = 0;

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            System.out.print(Arr[i][j]+"\t");
        }
        System.out.println();
      }
   }

   public void Transpose()
   {
      int i = 0, j = 0;

      System.out.println("transpose elements are :");

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
           System.out.print(Arr[j][i]+"\t");
        }
        System.out.println();
      }
   }

    public void ReverseR()
   {
       System.out.println("revers rows are :");
   
       int i = 0, j = 0;

       for(i = 0; i < Arr.length; i++)
       {
           for(j = Arr[i].length - 1; j >= 0; j--)
           {
               System.out.print(Arr[i][j] + "\t");
           }
           System.out.println();
       }
   }

   public void ReverseCol()
   {
       System.out.println("revers Col are :");
   
       int i = 0, j = 0;

       for(i = Arr[i].length - 1; i >= 0; i--)
       {
           for(j = 0; j < Arr.length; j++)
           {
               System.out.print(Arr[i][j] + "\t");
           }
           System.out.println();
       }
   }

}

public class program1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        // mobj.Transpose();
        // mobj.ReverseR();
        mobj.ReverseCol();

    }
}


