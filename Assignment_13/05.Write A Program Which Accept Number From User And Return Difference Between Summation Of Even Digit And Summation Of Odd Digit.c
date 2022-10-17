#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,E_Sum = 0,O_Sum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            E_Sum = E_Sum + iDigit;
        }
        if(iDigit % 2 == 1)
        {
            O_Sum = O_Sum + iDigit;
        }
        iNo = iNo / 10;
    }
    return E_Sum - O_Sum;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("\n Differnce Between Sum Of Odd Count & Even Count = %d",iRet);

    return 0;
}
