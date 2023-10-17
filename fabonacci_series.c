#include<stdio.h>
int main(){
int i,first=0,second=1,next,n;
printf("enter N:");
scanf("%d",&n);

for(i=0;i<=n-1;i++){
if(i<=1)
next=i;
else{
next=first+second;
first=second;
second=next;
}

printf("%d ",next);
}
return 0;
}
