#include<stdio.h>
 void Pattern(int iNo)
 {
     int i = 0;

     if(iNo <= 0)
     {
         iNo = -iNo;
     }
     for(i = 1;i <= iNo;i++)
     {
         printf(" $ * ");
     }
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     Pattern(iValue);

     return 0;
 }
