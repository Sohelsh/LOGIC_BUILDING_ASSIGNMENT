#include<stdio.h>
#include<conio.h>
 int SumNonFact(int iNo)
 {
     int i = 1,Sum = 0;

     while(iNo > i)
     {
         if(iNo % i != 0)
         {
             Sum += i;
         }
         i++;
     }
      return Sum;

 }
 int main()
 {
     int iValue = 0,iRet = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     iRet = SumNonFact(iValue);

     printf("\n Summation Of Non Factor = %d",iRet);

     return 0;

 }
