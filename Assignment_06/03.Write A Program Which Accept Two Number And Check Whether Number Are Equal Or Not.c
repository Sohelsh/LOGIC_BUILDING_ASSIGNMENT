#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

 BOOL ChkEqual(BOOL bNo1 ,BOOL bNo2)
 {
     if(bNo1 == bNo2)
     {
         return TRUE;
     }
     else
     {
         return FALSE;
     }
 }

 int main()
 {
     int iValue1 = 0,iValue2 = 0;
     BOOL bRet  = FALSE;

     printf("\n Entar Two Number = ");
     scanf("%d%d",&iValue1,&iValue2);

     bRet = ChkEqual(iValue1,iValue2);

     if(bRet == TRUE)
     {
         printf("\n Equal");
     }
     else
     {
         printf("\n Not Equal");
     }

     return 0;
 }
