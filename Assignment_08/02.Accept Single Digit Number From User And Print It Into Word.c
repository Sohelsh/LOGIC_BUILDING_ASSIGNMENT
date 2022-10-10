#include<stdio.h>

 void Display(int iNo)
 {  if(iNo <= 0)
    {
      iNo = -iNo;
    }
     if(iNo == 1)
    {
        printf("\n One ");
    }
    else if(iNo == 2)
    {
        printf("\n Two ");
    }
    else if(iNo == 3)
    {
        printf("\n Three ");
    }
    else if(iNo == 4)
    {
        printf("\n Four ");
    }
    else if(iNo == 5)
    {
        printf("\n Five ");
    }
    else if(iNo == 6)
    {
        printf("\n Six ");
    }
    else if(iNo == 7)
    {
        printf("\n Seven ");
    }
    else if(iNo == 8)
    {
        printf("\n Eight ");
    }
    else if(iNo == 9)
    {
        printf("\n Nine ");
    }
    else
    {
        printf("\n Invalid Number");
    }
 }
 int main()
 {
     int iValue = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;
 }
