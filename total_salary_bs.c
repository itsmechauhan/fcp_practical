// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    float bs,tax,hra,da,ta,ts;
    bs=15000;
    da=0.2*bs;
    hra=0.6*bs;
    ta=0.4*bs;
    tax=1.5*bs;
    ts=(bs+hra+da+ta)-tax;
    printf("total salary =%d",ts);
    return 0;
}
