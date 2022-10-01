#include<stdio.h>

int DispayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);
    }

}
int main()
{
    char cValue = '\0';

    printf("\n Entar Character = ");
    scanf("%c",&cValue);

    DispayConvert(cValue);

    return 0;
}
