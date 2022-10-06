#include<stdio.h>
#include<conio.h>

 int main()
 {
     char Name[30];

     printf("\n Please Entar Full Name = ");
     scanf("%[^\n]s",&Name);  // gets(Name);

     printf("\n Your Name Is = %s",Name);

     return 0;
 }
