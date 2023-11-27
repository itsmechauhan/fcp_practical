#include<stdio.h>
int main(){
	int rows,cols;
   
	printf("Enter the row length of array : ");
	scanf("%d",&rows);

	printf("\nEnter the cols length of array : ");
	scanf("%d",&cols);	
	//declaring array
	int arr[rows][cols],newarray[rows][cols];
	printf("\nenter the values in the array: \n");
	//taking input in the array arr
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
	scanf("%d",&arr[i][j]);
	}
}

	//transposing an array
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
	newarray[i][j]=arr[j][i];
	}
}

	printf("Array after tanspose: \n");
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
	printf("%d ",newarray[i][j]);
	}printf("\n");
}

	return 0;
}