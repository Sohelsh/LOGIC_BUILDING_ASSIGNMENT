#include<stdio.h>
#include<conio.h>

 int TouristBill(int iKilometres)
 {
     if(iKilometres <= 100)
     {
        return iKilometres * 25;
     }
     if(iKilometres >= 100)
     {
        iKilometres = iKilometres - 100;

        return ((iKilometres * 15)+(25 * 100));
     }
 }
 int main()
 {
     int KM = 0;

     printf("\n Entar Kilometres = ");
     scanf("%d",&KM);

     printf("\n Total Rent Of Your Cars = %d",TouristBill(KM));



     return 0;
 }
