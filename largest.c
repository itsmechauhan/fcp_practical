#include<stdio.h>

int main(){

int a,b,c,large;
printf("enter 1st value: ");
scanf("%d",&a);
printf("enter 2nd value: ");
scanf("%d",&b);
printf("enter 3rd value: ");
scanf("%d",&c);
(a>b&&a>c)?printf("%d",a):(b>c)?printf("%d",b):printf("%d",c);
printf(" is the largest no");
return 0;
}
