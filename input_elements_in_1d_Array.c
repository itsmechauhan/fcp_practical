#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of array : \n");
	scanf("%d",&size);
	//declaring array
	int arr[size];
	printf("enter the values in the array: \n");
	//taking input in the array arr
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	//printing the array arr
	printf("the input array is : \n");
	for(int i=0;i<size;i++){
	printf("%d ",arr[i]);
	}

}