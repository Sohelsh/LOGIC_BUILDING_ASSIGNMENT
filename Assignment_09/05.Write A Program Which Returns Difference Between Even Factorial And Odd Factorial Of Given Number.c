#include<stdio.h>
#include<conio.h>

int FactorialDiff(int iNo)
{
    int E_Fact = 1,O_Fact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        if(iNo % 2 == 0)
        {
            E_Fact *= iNo;
        }
        else if(iNo % 2 == 1)
        {
            O_Fact *= iNo;
        }
        iNo--;
    }
    return E_Fact - O_Fact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\n Factorial Difference Is = %d",iRet);

    return 0;
}
