#include<stdio.h>

 void Number(int iNo)
 {
     if(iNo <= 50)
     {
         printf("\n Small");
     }
     if(iNo >= 50 && iNo < 100)
     {
         printf("\n Medium");
     }
     if(iNo >= 100)
     {
         printf("\n Large");
     }
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     Number(iValue);

     return 0;
 }
