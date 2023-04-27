#include<stdio.h>
#include<conio.h>

void Range(int Arr[],int iLength,int iSP,int iEP)
{
    int i = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] > iSP && Arr[i] < iEP)
        {
            printf(" %d ",Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p =NULL;

    printf("\n Enter Number Of Elements = ");
    scanf("%d",&iSize);

    printf("\n Enter The Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter The Ending Point = ");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable To Allocate Memory ");
        return -1;
    }

    printf("\n Enter %d Elements ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}
