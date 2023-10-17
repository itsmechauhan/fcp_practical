#include<stdio.h>
int main(){
//WAP to swap two no without using third variable
int a=10,b=20;
printf("before swapping \n A= %d and B= %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nafter swapping without using third variable!! \n A= %d and B= %d",a,b);
return 0;
}
