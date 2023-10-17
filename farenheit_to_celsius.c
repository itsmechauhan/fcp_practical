#include<stdio.h>
int main(){
//write a program to convert farenheit to celsius
float celsius,farenheit;
printf("enter the temperature in farenheit:");
scanf("%f",&farenheit);
celsius=(farenheit-32)*5/9;
printf("the temperature in celsius =%.2f",celsius);
return 0;
}
