#include<stdio.h>

 void Display(int iNo)
 {
     int i = 0;

     for(i = 1;i <= iNo;i++)
     {
         printf(" %d ",i);
     }
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;
 }
