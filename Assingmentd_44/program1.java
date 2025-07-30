///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1 - 5.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description :  Accept the Matrix from user and display the additon of 
//                diagonal element.
//              
//                Accept the Matrix from user and display the additon of 
//                diagonal element.
//                
//                Accept the Matrix from user and display the  Largest element of 
//                All matrix
// 
/////////////////////////////////////////////////////////////////////////////////

/*
  Input :

    3  2  5  4
    4  3  2  2
    8  4  1  5
    3  3  7  5
 Q1
 Output: 12 

 Q2
 Input : 5
 Ouptut : 2

Q3
Output : 7

*/

import java.util.*;

class Matrix 
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }
    
    public void Accept(int A, int B)
    {
        System.out.println("Enter the element of Matrix : ");
        
        Scanner sobj = new Scanner(System.in);
        int i , j = 0;

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
        
        int i , j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
               System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }


    public int DiagonalSum()
    {
       int i , j = 0, iSum = 0 ;

       for(i = 0; i < Arr.length; i++)
       {
         for(j = 0; j < Arr[i].length; j++)
         {
            if(i == j)
            {
                iSum += Arr[i][j];
            }
         }
       }
       return iSum;
    }

    public int FrequencyCount(int iNo)
    {
       int i , j = 0, iCount = 0 ;

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

    public int LargestNumber()
    {
       int i , j = 0, iMax = 0 ;

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
}

public class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);
        int iRet = 0;

        mobj.Accept(iRow, iCol);

        System.out.println("Enter the number that you want to count frequency : ");
        int iNo = sobj.nextInt();

        mobj.Display(); 

        iRet = mobj.DiagonalSum(); 
        System.out.println("Addition is : "+ iRet);

        iRet = mobj.FrequencyCount(iNo); 
        System.out.println("Count is : "+ iRet);

        iRet = mobj.LargestNumber(); 
        System.out.println("Largest Number is  : "+ iRet);
    }
}




