//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.C
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the N from User and display The sumation of the digit number
 * 
 */

 #include<stdio.h>

 void DigitSum(int *Arr, int iSize)
 {
    int i = 0, iSum = 0, iDigit = 0;

    for(i = 0; i < iSize; i++)
    {
        int num = Arr[i];
        iSum = 0;

        while(num != 0)
        {
           iDigit = num % 10;
           iSum += iDigit;
           num = num /10;
        }

        printf("%d \t", iSum);
    }
 
 }

 int main()
 {
    int iSize = 0, i = 0;
    int *Arr = NULL;

    printf("Enter the size of array: \n");
    scanf("%d",&iSize);

    Arr = (int *)malloc(iSize * sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to allocate the memory array \n");
        return -1;
    }

    printf("Enter the element of the array : \n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &Arr[i]);
    }

    DigitSum(Arr, iSize);

    free(Arr);

    return 0;
 }