#include<stdio.h>

 void PrintEven(int iNo)
 {
     int i = 0;

     if(iNo <= 0)
     {
         return;
     }
     for(i = 1;i < iNo;i++)
     {

         printf(" %d ",2*i);

     }
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     PrintEven(iValue);

     return 0;
 }
