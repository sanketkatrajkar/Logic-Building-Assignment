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

    public int MaxDiagonal()
    {
        int max = 0,j = 0, i = 0;

        int N = Arr.length;

        Arr[0][0] = max;

        for( i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((i == j) || ((i + j) == N - 1))
                {
                   if(Arr[i][j] > max)
                   {
                     max = Arr[i][j];
                   }
                }
            }
        }

        return max; 
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

    public void SwapConsecutiveRows()
    {
        int temp = 0;
    
        for(int i = 0; i < Arr.length; i = i + 2)
        {
            for(int j = 0; j < Arr[i].length; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
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

}


public class program3 
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

        iRet = mobj.MaxDiagonal();
        System.out.println("Maximum Number from both diagonal are : "+ iRet);

        mobj.SumationCol();

        mobj.SwapConsecutiveRows();

        mobj.Display();

        sobj.close();
    }
}
