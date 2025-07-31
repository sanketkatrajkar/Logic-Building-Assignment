//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 :Accept the number  from User and display the addition  of rowwise.
 *                Q2 : Accept the number from User and display the addition  of column wise
 *               Q3 : Accept the number  from User and display Addition of diagonla element
 *               Q4 : Accept the number  from User and display Count the frequecy of Number.
 *               Q5 : Accept the number  from User and display swap the element consecutive row                 
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

   public void SwapM()
    {
        int i = 0, j = 0, temp = 0;

        for(i = 0; i < Arr.length - 1; i+=2)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
               temp = Arr[i][j];
               Arr[i][j] = Arr[i + 1][j];
               Arr[i + 1][j] = temp;
            }
        }
    }

   public void Display()
   {
      System.out.println("Swap elements are : ");
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
}

public class program5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0, iNo = 0;

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.SwapM();
        mobj.Display();
        // mobj.row();
       




    }
}


