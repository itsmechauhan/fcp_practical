#include <stdio.h>

int main() {
    int n,i,j,k,l ;
    printf("Enter the number of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
        {
            printf("*");
        }
        for(k=1;k<=2*i-2;k++)
        {
            printf(" ");
        }
        for(l=1;l<=n-i+1;l++)
        {
            printf("*");
        }
         printf("\n");
    }

    for  (i = 1; i <= n; i++) 
       {
        for ( j = 1; j <= i; j++) 
        {
            printf("*");
        }
        for (k = 1; k <= 2*(n - i); k++) 
        {
            printf(" ");
        }
        for ( l = 1; l <= i; l++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
