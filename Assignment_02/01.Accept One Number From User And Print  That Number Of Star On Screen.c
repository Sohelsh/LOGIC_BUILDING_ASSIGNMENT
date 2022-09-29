#include<stdio.h>

void Display(int iNo)
{
            int iCnt = 0;

            while(iCnt < iNo)
            {
                printf(" * ");

                iNo--;
            }
}
int main()
{
            int iValue = 0;

            printf("\n Entar Number = ");
            scanf("%d",&iValue);

            Display(iValue);

            return 0;
}
