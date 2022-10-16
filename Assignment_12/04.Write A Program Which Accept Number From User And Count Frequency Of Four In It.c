#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, Four_Cnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            Four_Cnt++;
        }
        iNo = iNo / 10;
    }
    return Four_Cnt;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("\n Count Of Four Is = %d",iRet);

    return 0;
}
