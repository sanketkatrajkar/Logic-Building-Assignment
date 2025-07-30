///////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.c 
// Author      :  Sanket Ashok Katrajkar
// Date        :  01/07/2025
///////////////////////////////////////////////////////////////////////////////
// 
// Description : Reverse Number
/////////////////////////////////////////////////////////////////////////////////

/*
      
    Element :  11 -> 28 -> 17 -> 41 -> 6 -> 89 -> NULL
    
     Output :  11 82 71 14 

*/



int main()
{

    int rev = 0;
    int num = 82;

    while(num != 0)
    {
        int digit =  num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    printf("%d ", rev);
    
    return 0;
}