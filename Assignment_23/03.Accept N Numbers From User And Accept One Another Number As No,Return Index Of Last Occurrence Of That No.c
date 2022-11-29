#include<stdio.h>
#include<conio.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
       int i = 0;

       for(i = iLength;i > 0;i--)
       {
           if(Arr[i] == iNo)
           {
               return i;
           }
       }
       return -1;
}
int main()
{
        int iSize = 0,iCnt = 0,iValue = 0,iRet = 0;
        int *p = NULL;

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

        iRet = LastOcc(p,iSize,iValue);

        if(iRet == -1)
        {
            printf("\n There Is No Such Number : %d",iRet);
        }
        else
        {
            printf("\n Last Occurrence Of Number Is :%d",iRet);
        }

        return 0;
        getch();
}
