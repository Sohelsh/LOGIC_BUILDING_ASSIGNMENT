#include<stdio.h>
#include<conio.h>

void StrCpyRev(char *Src,char *dest)
{
   int i = 0,j = 0;

   while(Src[i] != '\0')
   {
       i++;
   }
   i--;

   while(Src[j] != '\0')
   {
       dest[j] = Src[i];
       j++;
       i--;
   }
}
int main()
{
    char Arr[30] = "";
    char Brr[30] = "";

    printf("\n Enter String = ");
    gets(Arr);

    StrCpyRev(Arr,Brr);

    printf("\n Out Is = %s",Brr);

    getch();
    return 0;
}
