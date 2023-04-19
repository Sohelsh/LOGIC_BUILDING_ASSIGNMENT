#include<stdio.h>
#include<conio.h>

void StrCpyCap(char *Str,char *Dest)
{
    while(*Str != '\0')
    {
        if(*Str >= 'a' && *Str <= 'z')
        {
           *Dest = *Str - 32;
            Dest++;
        }
        Str++;
    }
}
int main()
{
    char Arr[30] = "";
    char Brr[30] = "";

    printf("\n Enter String = ");
    gets(Arr);

    StrCpyCap(Arr,Brr);

    printf("\n Output Is = %s",Brr);

    getch();
    return 0;
 }
