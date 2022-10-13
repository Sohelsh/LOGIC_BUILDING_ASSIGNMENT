#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
          iDigit = iNo % 10;
           if(iDigit == 0)
           {
            return TRUE;
           }
          iNo  = iNo / 10;
    }
    return 0;


}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("\n Contains Zero");
    }
    else
    {
        printf("\n There Is No Zero");
    }
    return 0;
}
