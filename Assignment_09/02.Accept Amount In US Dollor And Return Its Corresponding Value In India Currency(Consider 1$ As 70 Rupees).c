#include<stdio.h>
#include<conio.h>

int DollarToINR(iNo)
{
    return 70*iNo;

}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("\n Enter Number Of USD = ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("\n Value In INR Is = %d",iRet);

    return 0;
}
