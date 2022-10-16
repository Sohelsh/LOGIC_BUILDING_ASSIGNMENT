#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,Cnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            Cnt++;
        }
        iNo = iNo / 10;
    }
    return Cnt;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("\n Less Than 6 Count Is = %d",iRet);

    return 0;
}
