#include<stdio.h>
int main(){
//WAP to convert temperature from celsius to farenheit
float celsius,farenheit;
printf("enter the temperature in celsius:");
scanf("%f",&celsius);
farenheit=(celsius*9/5)+32;
printf("the temperature in farenheit = %f",farenheit);
return 0;
}
