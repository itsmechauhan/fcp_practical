#include<stdio.h>
int main(){
	int length;
	 scanf("%d",&length);
	for(int i=length;i>0;i--){
		for(int j=i;j>0;j--){
			printf("* ");
		}
		for(int j=1;j<=length-i;j++){
			printf("    ");
		}
		for(int j=1;j<=i;j++){
			printf("* ");
		}printf("\n");
	}
	for(int i=0;i<length;i++){
		for(int j=0;j<=i;j++){
			printf("* ");}
		for(int j=length-(i+1);j>=1;j--){
			printf("    ");
		}
		for(int j=0;j<=i;j++){
			printf("* ");
		}printf("\n");		
	}

return 0;
}