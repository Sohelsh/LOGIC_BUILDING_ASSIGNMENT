#include<stdio.h>
#include<conio.h>

double SquareMeter(float fSquare)
{
    return fSquare * 0.0929;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter Area In Square Feet = ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("\n Square Meter Is = %f",dRet);

    return 0;
}
