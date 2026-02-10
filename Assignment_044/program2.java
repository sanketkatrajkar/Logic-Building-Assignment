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
        System.out.println("Enter the  Elements :");

        Scanner eobj = new Scanner(System.in);

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = eobj.nextInt();
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

    public int CountFrequency(int No)
    {
        int iCount = 0;

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                if(Arr[i][j] == No)
                {
                    iCount++;
                }
            }
        }

        return iCount;
    }


}
public class program2 
{
    public static void main(String A[])
    {
        int iRow = 0, iCol = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the Number of Columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Enter the number that you want count : ");
        int No = sobj.nextInt();

        iRet = mobj.CountFrequency(No);

        System.out.println("Frequency of Number are : " + iRet);

        sobj.close();
    }
}
