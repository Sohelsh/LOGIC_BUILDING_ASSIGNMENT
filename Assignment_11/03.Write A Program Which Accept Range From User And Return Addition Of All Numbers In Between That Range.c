#include<stdio.h>
#include<conio.h>

int RangeSum(int iStart,int iEnd)
{
    int i = 0,Sum = 0;

    if(iStart > iEnd ||iStart <= 0)
    {
        printf("\n Invalid Number");
        return 0;
    }
    for(i = iStart;i <= iEnd;i++)
    {
        Sum = Sum + i;
    }
    return Sum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("\n Addition Is = %d",iRet);

    return 0;
}
