package Assignment_045;

import java.util.Scanner;

class Matrix 
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Elements of Matrix : ");

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt(); 
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of Matrix are : ");

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println(); 
        }   
    }

    public void RevRow(int Rows , int Cols)
    {
        System.out.println("After Revers of Rowise : ");
        int i = 0, j = 0;
        for(i = 0; i < Rows; i++)
        {
            j = Cols;
            for( j = Cols - 1; j >= 0; j--)
            {    
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println(); 
        } 
    }
}



public class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the size of Columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        mobj.RevRow(iRow, iCol);

    }
    
}
