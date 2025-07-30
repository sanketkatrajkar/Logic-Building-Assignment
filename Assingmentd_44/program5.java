///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Matrix from user and display additon of each  
//                column.
//              
//               
// 
/////////////////////////////////////////////////////////////////////////////////

/*
  Input :

    3  2  5  4
    4  3  2  2
    8  4  1  5
    3  3  7  5
 Q4
 Output :  14
           11
           18
           18
*/

import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept(int A, int B)
    {
        System.out.println("Enter the element of Matrix that you want : ");

        Scanner sobj = new Scanner(System.in);
        int i, j = 0;

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
        System.out.println("Element of the Matrix : ");
        int i, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
           for(j = 0; j < Arr[i].length; j++)
           {
              System.out.print(Arr[i][j] + "\t");
           }
           System.out.println();
        }
    }

    public void Swap(int A, int B)
    {
        int i , j , temp = 0; 

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < B; j++)
            {
               
            }
        }
    }

     
}

public class program5
{
    public static void main(String A[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the Number of Row : ");
       int iRow = sobj.nextInt();

       System.out.println("Enter the Number of Col : ");
       int iCol = sobj.nextInt();

       Matrix mobj = new Matrix(iRow, iCol);
       int iRet = 0;

       mobj.Accept(iCol, iRet);

       mobj.Display();
       

    }
}