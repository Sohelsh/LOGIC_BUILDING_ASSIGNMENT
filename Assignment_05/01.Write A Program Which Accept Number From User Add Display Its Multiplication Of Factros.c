#include<stdio.h>
#include<conio.h>

 int MultFact(int iNo)
 {
     int i = 1,Fact = 1;

     while(iNo/2 >= i)
     {
         if(iNo % i == 0)
         {
             Fact = Fact * i;
         }
         i++;
     }
     return Fact;
 }
  int main()
 {
     int iValue = 0;
     int iRet = 0;

     printf("\n Entar Number = ");
     scanf("%d",&iValue);

     iRet = MultFact(iValue);

     printf("Factors Of Number = %d",iRet);

     getch();
     return 0;

 }
