# include <stdio.h>

int main(){
	int n;
	printf("Enter the order of matrix:");
	scanf("%d", &n);
	
	int a[n][n], b[n][n];
	int row, col, sum=0;
	
	printf("Elements of the matrix:-\n");
	for(row=0; row<n; row++){
		for(col=0; col<n; col++){
			printf("Enter element:");
			scanf("%d", &a[row][col]);
		}
	}
	
	for (row = 0; row < n; row++)
    for (col = 0; col < n; col++) {
    	b[col][row]=a[row][col];
    }


  printf("\nTranspose Of Matrix: \n");
  for (row = 0; row < n; row++)
    for (col = 0; col < n; col++) {
      printf("%d   ", b[row][col]);
      if (col == n - 1) {
        printf("\n\n");
      }
    }
	
	return 0;
}
