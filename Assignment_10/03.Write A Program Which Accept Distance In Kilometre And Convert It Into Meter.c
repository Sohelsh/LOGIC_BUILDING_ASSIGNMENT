#include<stdio.h>
#include<conio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Distance = ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("\n Kilometer Is = %d",iRet);

    return 0;
}
