#include<stdio.h>
#include<conio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int i = 0;

    if(iStart > iEnd)
    {
        printf("\n Invalid  Number");
    }
    for(i = iEnd;i >= iStart;i--)
    {
        printf(" %d ",i);
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}
