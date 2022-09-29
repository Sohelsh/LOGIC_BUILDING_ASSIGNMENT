#include<stdio.h>

 void Display(int iNo)
 {
             if(iNo < 10)
             {
                 printf("\n Hello");
             }
             else
             {
                 printf("\n Demo");
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
