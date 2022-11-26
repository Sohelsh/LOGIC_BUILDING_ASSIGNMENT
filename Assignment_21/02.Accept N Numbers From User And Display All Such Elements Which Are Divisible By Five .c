#include<stdio.h>
#include<conio.h>

void Display(int Arr[],int iLength)
{
    int i = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf(" %d ",Arr[i]);
        }
    }

}
int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements = ");
    scanf("%d",&iSize);

    p =(int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable To Allocate Memory ");
        return -1;
    }

    printf("\n Enter %d Elements = ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    getch();
    return 0;
}
