#include<stdio.h>

 void MultipleDisplay(iNo)
 {
     int i = 0;

     for(i = 1;i <= 5;i++)
     {
         printf(" %d ",i*iNo);
     }
 }

 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     MultipleDisplay(iValue);

     return 0;
 }
