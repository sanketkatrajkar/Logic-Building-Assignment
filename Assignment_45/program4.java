///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
///////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q4  Accetp the number from user and check wheather matrix is 
                      Identity or not.
                       
 */

/*
       Input :  1  0  0  0
                0  1  0  0
                0  0  1  0
                0  0  0  1

    Ouptut : TRUE
    
    input    :  3  4  8  3
                2  3  4  9
                5  2  1  7
                9  2  5  5

    Ouptut : false


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

   public boolean CheckIdentity()
   {
      int i = 0, j = 0;

      if(Arr.length != Arr[0].length)
      {
          return false;
      }

      for(i = 0; i < Arr.length; i++)
      {
        for(j = 0; j < Arr[i].length; j++)
        {
            if(i == j && Arr[i][j] != 1)
            {
                return false;
            }
            else if(i != j && Arr[i][j] != 0)
            {
                return false;
            }
        }
      }
      
      return true;
   } 

}

public class program4
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
        
        bRet = mobj.CheckIdentity();

        if(bRet == true)
        {
            System.out.println("Matrix are Identity");
        }
        else
        {
            System.out.println("Matrix are not Identity");
        }

    }
}


