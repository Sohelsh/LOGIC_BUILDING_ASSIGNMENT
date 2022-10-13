#include<stdio.h>
#include<conio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i = 0,E_Sum = 0;

    if(iStart > iEnd || iStart <= 0)
    {
        printf("\n Invalid Range");
        return 0;
    }
    for(i = iStart;i <= iEnd;i++)
    {
        if(i % 2 == 0)
        {
            E_Sum = E_Sum + i;
        }
    }
    return E_Sum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iRet = 0;

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("\n Addition Of Even Numbers = %d",iRet);

    return 0;
}
