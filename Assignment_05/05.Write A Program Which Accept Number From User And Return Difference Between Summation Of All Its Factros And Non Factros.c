#include<stdio.h>
#include<conio.h>
 int FactDiff(int iNo)
 {
     int i = 1,Fact = 0,NonFact = 0;

     while(iNo > i)
     {
         if(iNo % i == 0)
         {
            Fact += i;
         }
         else
         {
             NonFact += i;
         }
         i++;
     }
     return Fact - NonFact;
 }
 int main()
 {
     int iValue = 0,iRet = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     iRet = FactDiff(iValue);

     printf("\n Difference Of Factors And Non Factors = %d",iRet);

     return 0;
 }
