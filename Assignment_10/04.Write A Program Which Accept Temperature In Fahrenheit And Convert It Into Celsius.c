#include<stdio.h>
#include<conio.h>

double FhtoCs(float fTemp)
{
    return ((fTemp - 32)*(5.0/9.0));
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n Enter Temperature In Fahrenheit = ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("\n Celsius Is = %f",dRet);

    return 0;
}
