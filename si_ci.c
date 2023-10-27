// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
float si(float p,float r,float t);
float ci(float p,float r,float A,float t);

int main() {
    // Write C code here
    float p,SI,CI,r,t,A;
    printf("enter the value of variables : ");
    scanf("%f%f%f",&p,&r,&t);
    SI=si(p,r,t);
    CI=ci(p,r,A,t);
    printf("The simple Interest is: %f\n",SI);
    printf("The compound Interst is: %f\n",CI);
    return 0;
}
float si(float p,float r,float t){
    return (p*r*t)/100;
}
float ci(float p,float r,float A,float t)
      {
      int temp=pow(1+(r/100),t);
      A=p*temp;
      return A-p;
     }
