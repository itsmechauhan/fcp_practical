#include<stdio.h>
int main(){
    int rem,temp,rev=0,num;
    printf("enter the number: ");
    scanf("%d",&num);
    int *ptr;
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        }
        ptr=&rev;
    printf("reverse of the no is : %d\n",rev);     
    
    if(temp==rev){
        printf(" the no: %d is a palindrome no which is stored at address: %u\n",*ptr,ptr);
    }
else{
        printf("the No: %d is not a palindrome no !! \n",rev);
    }
    }
