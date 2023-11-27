#include<stdio.h>
int main(){
	int size,stepcounter=1;
    //program to reverse the array
	printf("Enter the size of array : \n");
	scanf("%d",&size);	
	//declaring array
	int arr[size];
	printf("enter the values in the array: \n");
	//taking input in the array arr
	for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
	}
	
	//sorting an array using bubble sort
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[i]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
	}
	
	printf("\nstep %d = ",stepcounter);		
	stepcounter++;

	for(int k=0;k<size;k++){
	printf("%d ",arr[k]);
	}

	}
	}

	//printing an array after sorting
	printf("\nArray after sorting : \n");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}







}