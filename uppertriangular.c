#include<stdio.h>
int main(){
	int rows,cols;
   
	printf("Enter the row length of array : ");
	scanf("%d",&rows);

	printf("\nEnter the cols length of array : ");
	scanf("%d",&cols);	
	//declaring array
	int arr[rows][cols];
	printf("\nenter the values in the array: \n");
	
	//taking input in the array arr
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
	scanf("%d",&arr[i][j]);
	}
}
    //printing daigonal elements
    printf("The upper triangular elements of the array are: \n");
	for(int i=0;i<rows;i++){
	for(int j=0;j<cols;j++){
		if(i<=j)
			printf("%d ",arr[i][j]);
		else
			printf("0 ");
	}printf("\n");
}




	return 0;
}
