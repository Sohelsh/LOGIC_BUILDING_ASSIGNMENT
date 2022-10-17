#include<stdio.h>

int MultiDigit(int iNo)
{
    int iDigit = 0,Mul = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 0)
        {
          Mul =  Mul * iDigit;
        }

        iNo = iNo / 10;
    }
    return Mul;
}
int main()
{
    int iValue = 0,iRet = 0 ;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);

    printf("\n Multiplication Of Number Is = %d",iRet);

    return 0;
}
