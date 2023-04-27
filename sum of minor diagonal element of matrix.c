# include <stdio.h>

int main(){
	int n;
	printf("Enter the order of matrix:");
	scanf("%d", &n);
	
	int a[n][n];
	int row, col, sum=0;
	
	printf("Elements of the matrix:-\n");
	for(row=0; row<n; row++){
		for(col=0; col<n; col++){
			printf("Enter element:");
			scanf("%d", &a[row][col]);
		}
	}
	
	for(row=0; row<n; row++){
		for(col=0; col<n; col++){
			if(row+col == (n+1)-2){
				sum = sum +a[row][col];
			}
		}
	}
	
	printf("Sum of minor diagonal element: %d", sum);
}
