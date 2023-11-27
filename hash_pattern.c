#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==2||i==4||j==2||j==4){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }printf("\n");
    }

    
    return 0;
}
