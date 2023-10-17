#include<stdio.h>
int main(){
/*
Write a C program to calculate area of circle
*/
int unit,rate,bill;

printf("enter the unit: ");
scanf("%d",&unit);
 
if(unit<=1000)rate=5;

if(unit>1000&&unit<=2000)rate=6;

if(unit>2000)rate=7;

bill= unit*rate;

printf("the total electricity is %d",bill);
return 0;
}
