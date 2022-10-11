#include<stdio.h>
#include<conio.h>
#define Pi 3.14

double CircleArea(float fRadius)
{
    return fRadius * fRadius * Pi ;
}
int main()
{
    float fValue = 0.0;
    double dRet  = 0.0;

    printf("\n Enter Radius = ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\n Radius Of Circle = %0.4f",dRet);

    return 0;
}
