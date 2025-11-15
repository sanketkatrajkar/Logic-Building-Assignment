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

    public void SumationRow()
    {
      int i = 0, j = 0;

      System.out.println("Sumation of the Each Row :");
      for(i = 0; i < Arr.length; i++)
      {
        int iSum = 0;
        for(j = 0; j < Arr[i].length; j++)
        {
           iSum  += Arr[i][j];
        }
        j++; 
        System.out.print(iSum + "\t");
      }
      System.out.println();
    }

    public int AddDiagonal()
    {
      int i = 0, j = 0, iSum = 0;

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            if(i == j)
            {
               iSum  += Arr[i][j];
            }  
        }
      }
      return iSum;
    }

    public void SumationCol()
    {
      int i = 0, j = 0;

      System.out.println("sumation of Each columns :");

      for(j = 0; j < Arr[0].length; j++)
      {
        int iSum = 0;
        for(i = 0; i < Arr.length; i++)
        {
           iSum  += Arr[i][j];
        }
        i++; 
        System.out.print(iSum + "\t");
      }
      System.out.println();
    }

    public int CountFrequency()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number that you want to be count : ");
        int iNo = sobj.nextInt();

        int i = 0, j = 0, iCount = 0;
        for(i = 0; i < Arr.length; i++)
        {
          for(j = 0; j < Arr[i].length; j++)
          {
             if(Arr[i][j] == iNo)
             {
                iCount++;
             }
          }   
        }

        return iCount;
    }

    public int Max()
    {
      int i = 0, j = 0, iMax = 0;

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            if(Arr[i][j] > iMax)
            {
               iMax = Arr[i][j];
            }  
        }
      }
      return iMax;
    }

    public void SwapM()
    {
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
               
            }
        }
    }
}

public class program1
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
        mobj.Display();

        mobj.SumationRow();
        mobj.SumationCol();

        iRet = mobj.AddDiagonal();
        System.out.println("Diagonal addition is : "+ iRet);
    
        iRet = mobj.CountFrequency();
        System.out.println("Frequency is : "+ iRet);

        iRet = mobj.Max();
        System.out.println("Maximum number is : "+ iRet);




    }
}


