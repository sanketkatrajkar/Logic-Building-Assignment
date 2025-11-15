//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the number from User and display Maximum Number
 * 
 *  Description : Q2 : Accept the number from User and display Minimum Number 
 */

import java.util.*;

class MaximumX
{
    private int Arr[];

    public MaximumX(int arr[])
    {
        this.Arr = arr;
    }

    public int findMaximum()
    {
        int iMax = Arr[0];
        int i = 0;   

        for( i = 1 ; i < Arr.length; i++)
        {
            if(Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
        }

        return iMax;
    }

    public int minimum()
    {
        int iMin = Arr[0];
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < iMin)
            {
                iMin = Arr[i];
            }
        }
          return iMin;
    }

    public int MaxMinDiff()
    {
        int maxmindiff = findMaximum() - minimum();
        return maxmindiff;
    }
}

class program1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter the elements:");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        MaximumX mobj = new MaximumX(Arr);
        int iRet = mobj.findMaximum();    

        System.out.println("Maximum number is: " + iRet);

        iRet = mobj.minimum();  
        System.out.println("Minimun Number is : "+iRet);

        iRet = mobj.MaxMinDiff();  
        System.out.println("MaxMinDiff Number is : "+iRet);
    }
}
