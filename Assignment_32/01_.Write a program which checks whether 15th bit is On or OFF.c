#include<stdio.h>
#include<conio.h>
typedef int BOOL;
typedef unsigned int UNIT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UNIT iNo)
{
  if((iNo >> 14) & (1))
  {
      return 1;
  }
  return 0;
}
int main()
{
  int iNo = 0,Res = 0;

  printf("\n Enter Number = ");
  scanf("%d",&iNo);

  Res = ChkBit(iNo);

  if(Res == TRUE)
  {
      printf("\n 15th Bit Is On");
  }
  else
  {
      printf("\n 15th Bit Is Off");
  }

  getch();
  return 0;
}
