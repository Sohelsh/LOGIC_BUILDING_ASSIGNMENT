#include<stdio.h>

 int Factorial(int iNo)
 {
     int Fact = 1;

     while(iNo != 0)
     {
         Fact = Fact * iNo;

         iNo--;
     }

     return Fact;
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     printf("\n Factorial Of Number Is %d = %d",iValue,Factorial(iValue));

     return 0;
 }
