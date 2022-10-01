#include<stdio.h>

 void DisplayFactor(int iNo)
 {
     int i = 1;

     if(iNo <= 0)
     {
         iNo = -iNo;
     }
     for(i = 1;i < iNo;i++)
     {
         if(iNo % i == 0)
         {
             printf(" %d ",i);
         }
     }
 }

 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     DisplayFactor(iValue);

     return 0;
 }
