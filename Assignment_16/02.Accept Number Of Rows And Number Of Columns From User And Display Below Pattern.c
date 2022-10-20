#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char Ch = '\0';

    for(i = 1;i <= iRow;i++)
    {
        for(Ch = 'A',j = 1;j <= iCol;j++,Ch++)
        {
            if(i % 2 == 1)
            {
              printf(" %c ",Ch);
            }
            else
            {
                printf(" %c ",Ch+32);
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Number Of Rows And Colums = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
