#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0,Two_Cnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
         {
            Two_Cnt++;
         }
        iNo = iNo / 10;
    }
    return Two_Cnt;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("\n Count Of Two Is = %d",iRet);

    return 0;
}
