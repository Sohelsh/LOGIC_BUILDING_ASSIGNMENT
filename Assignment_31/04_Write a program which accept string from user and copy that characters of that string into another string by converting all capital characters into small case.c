#include<stdio.h>
#include<conio.h>

void StrCpySmall(char *Str,char *Dest)
{
    while(*Str != '\0')
    {
        if(*Str >= 'A' && *Str <= 'Z')
        {
            *Dest = *Str + 32;
             Dest++;
        }
        Str++;
    }
}
int main()
{
    char Arr[30] = "",Brr[30] = "";

    printf("\n Enter String = ");
    gets(Arr);

    StrCpySmall(Arr,Brr);

    printf("\n Output Is = %s",Brr);

    getch();
    return 0;
}
