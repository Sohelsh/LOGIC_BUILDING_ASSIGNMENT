#include<stdio.h>

 float Precentage(float iNo1,float iNo2)
 {
     if(iNo1 <= 0 || iNo2 <= 0)
     {
         return 0;
     }
     else
     {
         return iNo2 / iNo1 * 100;
     }
 }
 int main()
 {

     float iValue1 = 0.0,iValue2 = 0.0, fRet = 0.0;

     printf("\n Entar Total Marks = ");
     scanf("%d",&iValue1);

     printf("\n Entar Obtained Marks = ");
     scanf("%d",&iValue2);

     fRet = Precentage(iValue1,iValue2);

     printf("\n Total Precentage Is = %0.1f%%",fRet);

     return 0;
 }
