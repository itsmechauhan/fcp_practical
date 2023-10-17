#include<stdio.h>
int main(){
/*
Write a C program to calculate bill according to following:
Uttrakhand state electricity board bill is generated on the following basis:
If units are less than or equal to 1000, rate is 5 rs/unit
If units are greater than 1000 and less than or equal to 2000, rate is 6 rs/unit
If units are greater than 2000, rate is 7rs/unit
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
