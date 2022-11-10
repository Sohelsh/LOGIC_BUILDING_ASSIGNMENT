#include<stdio.h>
#include<conio.h>

void Pattern(int Row ,int Columns)
{
    int i = 0,j = 0;

    for(i = 1;i <= Row;i++)
    {
        for(j = 1;j <= Columns;j++)
        {
            if(i == j || i == 1 || j == 1 || i == Row || j == Columns )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\n Enter Number Of Rows And Columns = ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}


