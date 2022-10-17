#include<stdio.h>

void Pattern(int iNo)
{
    char Ch = '/0',i = 0;

    for(i = 1,Ch = 'A';i <= iNo;Ch++,i++)
    {
        printf(" %c ",Ch);
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter Number Of Elements = ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
