#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0,j = 0;
    char Ch = '\0';

    for(Ch = 'A',i = 1;i <= iRow;i++,Ch++)
    {
        for(j = 1;j <= iCol;j++)
        {

              printf(" %c ",Ch);

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
