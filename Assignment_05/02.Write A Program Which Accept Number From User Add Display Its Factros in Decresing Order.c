#include<stdio.h>
#include<conio.h>

int FactRev(int iNo)
{
    int i = 0;

    i = iNo/2;
    while(i != 0 )
    {
        if(iNo % i== 0)
        {
           printf(" %d ",i);
        }
        i--;
    }

}
int main()
{
    int iValue = 0;

    printf("\n Entar Number = ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
