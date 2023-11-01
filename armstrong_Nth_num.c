#include<stdio.h>
#include<math.h>
void armstrong(int);
int main()
{
int n;
printf("enter the No:  ");
scanf("%d",&n);
armstrong(n);
return 0;
}

void armstrong(int n){
int temp1,temp2,sum=0,n_power,count=0,rem;
temp1=n;
temp2=n;
//counting no of elements in no N

while(temp1!=0)
{
count++;
temp1=temp1/10;
}

//calculating its Nth(count) power
while(temp2!=0)
{
rem=temp2%10;
n_power=pow(rem,count);
sum=sum+n_power;
temp2=temp2/10;
}

//checking armstrong or not
if(n==sum)
{
printf("\nthe given no (%d) is a armstrong no !!",n);
}
else
{
printf("\nthe given no (%d) is NOT a armstrong no!!",n);
}
}
