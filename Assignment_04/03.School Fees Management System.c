#include<stdio.h>
#include<conio.h>

int SchoolFees(int iStandard)
{
    if(iStandard == 1)
    {
        printf("%d",8900);
    }
    if(iStandard == 2)
    {
        printf("%d",12790);
    }
    if(iStandard == 3)
    {

        printf("%d",21000);
    }
    if(iStandard == 4)
    {
        printf("%d",23450);
    }
    else
    {
        printf("\n Wrong Input");
    }
    return 0;
}
int main()
{
    int iStd = 0;

    printf("\n Entar Standard = ");
    scanf("%d",&iStd);

    SchoolFees(iStd);

    return 0;
}
