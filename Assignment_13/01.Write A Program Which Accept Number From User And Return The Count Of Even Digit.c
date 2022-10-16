#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0,E_Cnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            E_Cnt++;
        }
        iNo = iNo / 10;
    }
    return E_Cnt;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("\n Count Of Even Number = %d",iRet);

    return 0;
}
