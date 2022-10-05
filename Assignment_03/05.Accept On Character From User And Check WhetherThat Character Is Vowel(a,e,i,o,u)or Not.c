#include<stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

char ChkVowel(char CValue)
{
              if(CValue >= 'A' && CValue <= 'Z')
            {
                CValue= CValue + 32;
            }
            if(CValue == 'a'|| CValue == 'e' || CValue == 'i'||CValue =='o'||CValue == 'u')
            {
                return TRUE;
            }
            else
            {
                return FALSE;
            }
}
int main()
{
            char cValue = '\0';
            BOOL bRet = FALSE;

            printf("\n Entar Character = ");
            scanf("%c",&cValue);

            bRet = ChkVowel(cValue);

            if(bRet == 1)
            {
                printf("\n It Is Vowel");
            }
            else
            {
                printf("\n It Is Not Vowel");
            }
            return 0;
}
