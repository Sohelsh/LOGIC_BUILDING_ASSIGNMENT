#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int i = 0;

    for(i = 0;i < iLength; i++)
    {
        if(Arr[i] == 11)
        {
            return TRUE;
        }
    }

    return FALSE;
}
int main()
{
    int iSize = 0,iCnt = 0,bRet = 0;
    int *p = NULL;

    printf("\n Enter Number Of Elements = ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable To Allocate Memory ");
        return -1;
    }

    printf("\n Enter %d Elements ",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("\n 11 Is Present");
    }
    else
    {
        printf("\n 11 Is Absent");
    }

    free(p);

    getch();
    return 0;
}
