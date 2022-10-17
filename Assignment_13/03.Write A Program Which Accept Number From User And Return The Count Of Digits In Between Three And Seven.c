#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0,Cnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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
    scanf("%d",&
          iValue);

    iRet = CountRange(iValue);

    printf("\n Count Of Between Three And Seven = %d",iRet);

    return 0;
}
