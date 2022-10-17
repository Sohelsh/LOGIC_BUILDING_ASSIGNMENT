#include<stdio.h>

void Pattern(int iNo)
{
    int i = 1;

    for(iNo ;i <= iNo;iNo--)
    {
        printf("%d # ",iNo);
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
