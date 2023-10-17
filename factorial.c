// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    //wap to find factorial no
    int i,n,fact;
    printf("enter m:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        fact=fact*i;
        
    }
    printf("%d",fact);
    return 0;
}
