#include<stdio.h>

void DisplayFactor(int ivalue)
{
    int i = 0;

    if(ivalue <= 0)
    {
        ivalue = -ivalue;
    }
    for(i = 1;i <= ivalue;i++)
    {
        if(ivalue % i == 0 && i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("\n Entar Number = ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}
