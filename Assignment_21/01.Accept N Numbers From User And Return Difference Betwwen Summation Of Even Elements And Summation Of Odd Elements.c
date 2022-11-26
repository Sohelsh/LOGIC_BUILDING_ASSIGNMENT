#include<stdio.h>
#include<conio.h>

int Difference (int Arr[],int iLength)
{
        int i = 0, Esum = 0, Osum = 0;

        for(i = 0;i < iLength;i++)
        {
            if(Arr[i] % 2 == 0)
            {
                Esum = Esum + Arr[i];
            }
            else
            {
                Osum = Osum + Arr[i];
            }
        }

        return Esum - Osum ;
}
int main()
{
        int iSize = 0,iRet = 0,iCnt = 0;
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
            printf("\n Enter Element %d : ",iCnt + 1);
            scanf("%d",&p[iCnt]);
        }

        iRet = Difference(p ,iSize);

        printf("\n Result Is = %d",iRet);

        free(p);

        getch();
        return 0;
}
