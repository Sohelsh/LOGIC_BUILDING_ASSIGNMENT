#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0,O_Cnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)
        {
            O_Cnt++;
        }
        iNo = iNo / 10;
    }
    return O_Cnt;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("\n Count Of Odd Number = %d",iRet);

    return 0;
}
