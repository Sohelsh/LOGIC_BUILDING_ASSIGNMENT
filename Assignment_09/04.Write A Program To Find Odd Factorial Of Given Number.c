#include<stdio.h>
#include<conio.h>

int OddFactorial(int iNo)
{
    int Fact = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        if(iNo % 2 == 1)
        {
            Fact *= iNo;
        }
        iNo--;
    }
    return Fact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("\n Odd Factorial Number Is = %d",iRet);

    return 0;
}
