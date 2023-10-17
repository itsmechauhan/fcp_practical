#include<stdio.h>
int main(){
//WAP to find largest of three no using if else
int a,b,c;
printf("enter A= ");
scanf("%d",&a);
printf("enter B= ");
scanf("%d",&b);
printf("enter C= ");
scanf("%d",&c);
if(a>b){
    if(a>c) printf("%d is a greatest no ",a);
    else printf("%d is a greatest no",c);
}
else{
if(b>c)printf("%d is a greatest no " ,b);  
else printf("%d is a greatest no",c);
}

return 0;
}
