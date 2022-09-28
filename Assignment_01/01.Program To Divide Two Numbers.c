#include<stdio.h>

 int Divide(int iNo1,int iNo2)
 {
      int iAns = 0;

      if(iNo2 == 0)
      {
           return -1;
      }
      iAns = iNo1 / iNo2;

      return iAns;
 }
 int main()
 {
      int iValue1 = 25,iValue2 = 5,iRet = 0;

       iRet = Divide(iValue1,iValue2);

       printf("\n Divide Is = %d",iRet);

       return 0;
 }
