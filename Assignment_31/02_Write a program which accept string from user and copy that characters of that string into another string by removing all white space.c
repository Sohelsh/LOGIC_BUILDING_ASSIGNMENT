#include<stdio.h>
#include<conio.h>

void StrCpyX(char *Src,char *Dest)
{
    while(*Src != '\0')
    {
        if(*Src != ' ' && *Src != '\t')
        {
           *Dest = *Src;
            Dest++;
        }
        Src++;
    }
}
int main()
{
    char Arr[30] = "";
    char Brr[30] = "";

    printf("\n Enter String = ");
    gets(Arr);

    StrCpyX(Arr,Brr);

    printf("\n Output Is = %s",Brr);

    getch();
    return 0;
}
