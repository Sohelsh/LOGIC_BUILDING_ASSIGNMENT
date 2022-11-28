#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Check(int Arr[],int iLength,int iNo)
{
       int i = 0;

       for(i = 0;i < iLength;i++)
       {
           if(Arr[i] == iNo)
           {
               return TRUE;
           }
       }
        return FALSE;
}
int main()
{
        int iSize = 0,iCnt = 0,iValue = 0;
        int *p = NULL;
        BOOL bRet = FALSE;

        printf("\n Enter The Number OF Elements = ");
        scanf("%d",&iSize);

        printf("\n Enter The Number = ");
        scanf("%d",&iValue);

        p = (int *)malloc(iSize * sizeof(int));

        if(p == NULL)
        {
            printf("\n Unable To Allocate Memory ");
            return -1;
        }

        printf("\n Enter %d Elements ",iSize);

        for(iCnt = 0;iCnt < iSize;iCnt++)
        {
            printf("\n Enter Elements %d : ",iCnt +1);
            scanf("%d",&p[iCnt]);
        }

        bRet = Check(p,iSize,iValue);

        if(bRet == TRUE)
        {
            printf("\n Number Is Present");
        }
        else
        {
            printf("\n Number Is No Present");
        }

        return 0;
        getch();
}
