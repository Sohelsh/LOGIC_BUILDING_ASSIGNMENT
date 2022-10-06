#include<stdio.h>
#include<conio.h>
 void NonFact(iNo)
 {
     int i = 1;

     while(iNo > i)
     {
         if(iNo % i != 0)
         {
             printf(" %d ",i);
         }
         i++;

     }

 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     NonFact(iValue);

     return 0;
 }
