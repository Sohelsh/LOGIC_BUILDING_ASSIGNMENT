#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = -iNo;i <= iNo;i++)
    {
        printf(" %d ",i);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Entar Number = ");
    scanf("%d",&iValue);

    Display(iValue);
}
