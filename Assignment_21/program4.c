//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program4.C
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/08/2025
//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the number from User and display Only three digit number.
 * 
 */


 #include<stdio.h>

 void ThreeDigit(int *Arr, int iNo)
 {
    int i = 0, iCount = 0;

    for(i = 0; i < iNo; i++)
    {
      int num = Arr[i];
      iCount = 0;

      while(num != 0)
      {
         iCount++;
         num = num / 10;
      }

      if(iCount == 3)
      {
         printf("%d", Arr[i]);
      }
    }
    printf("\n");
 }

 int main()
 {
    int iSize = 0 , i = 0;
    int *Arr = NULL;

    printf("Enter the number of element : \n");
    scanf("%d", &iSize);

    Arr = (int *)malloc(iSize * sizeof(int));
     
    printf("Enter the element of Array :\n ");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    ThreeDigit(Arr, iSize);

    free(Arr);

    return 0;
 }

