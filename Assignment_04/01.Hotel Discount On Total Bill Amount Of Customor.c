#include<stdio.h>

float CalculateBill(float iAmount)
{
            if(iAmount <= 500)
            {
                return iAmount;
            }
            else if(iAmount >= 500 && iAmount <=1500)
            {
               return iAmount - (iAmount * 10/100);
            }
            else if(iAmount >= 1500)
            {
               return iAmount - (iAmount * 15 / 100);
            }

}
int main()
{
            int iBill = 0;

            printf("\n Entar Bill Amount = ");
            scanf("%d",&iBill);

            printf("\n Bill Amount = %d \n Total Bill = %0.2f",iBill,CalculateBill(iBill));
}
