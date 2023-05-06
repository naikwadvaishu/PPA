//Write a program which chech whether the number is even or odd.


#include<stdio.h>         //for printf and scanf
#include<stdbool.h>       //for bool data type

////////////////////////////////////////////
// function name  -> checkevenodd
//Input          ->   integer
//Output         ->   boolean
//Description    ->   check  whether the number is even or odd.
//Author         ->   vaishnavi nandkishor naikwad
//Date        ->     25/04/2023

////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
   if((iNo % 2) == 0)
   {
    return true;
   }
   else
   {
    return false;
   }
}

///////////////////////////////
////Entry point function
///////////////////////////////// 

int main()
{
    int iValue = 0;
    bool bRet = false;

     printf("Please enter number to check whether it  is even or odd : \n");
     scanf("%d",&iValue);

     bRet = CheckEvenOdd(iValue);      //function call
    
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
     printf("%d is Odd number\n",iValue);   
    }
    return 0;
}