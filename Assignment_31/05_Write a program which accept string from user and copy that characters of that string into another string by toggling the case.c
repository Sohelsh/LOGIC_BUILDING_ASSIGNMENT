#include<stdio.h>
#include<conio.h>

void StrCpyToggle(char *Str,char *Dest)
{
    while(*Str != '\0')
    {
        if(*Str >= 'a' && *Str <= 'z')
        {
            *Dest = *Str - 32;
             Dest++;
        }
        else if(*Str >= 'A' && *Str <= 'Z')
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

    StrCpyToggle(Arr,Brr);

    printf("\n Output Is = %s",Brr);

    getch();
    return 0;
}
