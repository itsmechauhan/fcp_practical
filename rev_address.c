#include<stdio.h>
int main(){
    int rem,rev,num;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0){
        int  temp,num,rem,rev=0;
        temp=num;

        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        int *ptr=&rev;
        
    }
    if(temp==rev){
        printf("reverse of number is %d\n at address %u\n",*ptr,ptr);
    }else{
        printf("not reverse %d\n",rev);
    }
    }
}
