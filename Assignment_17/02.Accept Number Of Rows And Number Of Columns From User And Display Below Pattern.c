#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j= 0,No = 1;

    for(i = 1;i <= iRow;i++)
    {
        for(j = 1,No = 1;j <= iCol;j++,No++)
        {
            if(i % 2 != 0 )
            {
              printf(" %d ",No * 2);

            }
            else
            {
               if(No % 2 == 1)
               {
                    printf(" %d ",No);
               }
               No++;

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
