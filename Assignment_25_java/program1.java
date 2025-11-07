//////////////////////////////////////////////////////////////////////////////////////////////////
// File Name   :  program1.java
// Author      :  Sanket Ashok Katrajkar
// Date        :  07/11/2025



//////////////////////////////////////////////////////////////////////////////////////////////////
/*
 *  Description : Q1 : Accept the string from the user and convert into the smaller to upper case and 
                       upper to smaller case  

                       Toggle String program 
 */

import java.util.Scanner;

class strtoggle
{
    strtoggle(String name)
    {
        String result = "";

        for(int i = 0; i < name.length(); i++)
        {
           char ch = name.charAt(i);

           if(ch >= 'a' && ch <= 'z')        
           {
               ch = (char)(ch - 32);
           }
           else if(ch >= 'A' && ch <= 'Z')
           {
               ch = (char)(ch + 32);
           }

           result = result + ch;
        }
       
       System.out.println("Toggle string is : " + result);
    }
}

class program1 
{
   public static void main(String A[])
   {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the name");
       String name = sobj.nextLine();

       strtoggle obj = new strtoggle(name);
   }
}
