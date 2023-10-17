// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int p,r,t,n=2;
    float si,a,R,ci,nt;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("enter rate :");
    scanf("%d",&r);
    printf("enter time: ");
    scanf("%d",&t);
    
    si=(p*r*t)/100;
    nt=n*t;
    R=r/n;
    a=pow(p*(1+R/n),nt);
    ci=a-p;
    printf("enter compound interest: %f",ci);

    return 0;
}
