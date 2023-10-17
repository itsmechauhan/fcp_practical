// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    //wap to find reverse
    int n,rev=0,rem=0;
    printf("enter the n:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse = %d",rev);
    
    return 0;
}
