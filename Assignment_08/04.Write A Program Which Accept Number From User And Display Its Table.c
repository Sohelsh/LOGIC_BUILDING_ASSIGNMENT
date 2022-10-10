#include<stdio.h>
#include<conio.h>

void Table(int iNo)
{
        int i = 1;

        if(iNo <= 0)
        {
            iNo = -iNo;
        }
        while(i <= 10)
        {
            printf(" %d ",i*iNo);
            i++;
        }
}
int main()
{
        int iValue = 0;

        printf("\n Enter Number = ");
        scanf("%d",&iValue);

        Table(iValue);

        return 0;
}
