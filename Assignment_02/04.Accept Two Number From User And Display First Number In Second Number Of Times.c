#include<stdio.h>

 void Display(int iNo,int iFrequency)
 {
             int i = 0;

             for(i = 1;i <= iFrequency;i++)
             {
                 printf(" %d ",iNo);
             }
 }
 int main()
 {
             int iValue = 0,iCount = 0;

             printf("\n Entar Number = ");
             scanf("%d",&iValue);

             printf("\n Entar Frequency = ");
             scanf("%d",&iCount);

             Display(iValue,iCount);

             return 0;
 }
