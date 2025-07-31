///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
///////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q4  Accetp the number from user and check wheather matrix is 
 *                    sparse or not
                       
 */

/*
       Input :  1  0  0  0
                0  1  0  0
                0  0  1  0
                0  0  0  1

    Ouptut : TRUE
    


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

   public boolean CheckSparse()
   {
      int i = 0, j = 0, iCount1 = 0, iCount2 = 0;

      if(Arr.length != Arr[0].length)
      {
          return false;
      }

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            if((Arr[i][j] == 0))
            {
                iCount1++;
            }
            else if(Arr[i][j] != 0)
            {
                iCount2++;
            }
        }
      }

      if(iCount1 > iCount2)
      {
        return true;
      }
      else
      {
        return false;
      }
   } 

}

public class program5
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false; 

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        
        bRet = mobj.CheckSparse();

        if(bRet == true)
        {
            System.out.println("Matrix are sparse");
        }
        else
        {
            System.out.println("Matrix are not sparse");
        }

    }
}


