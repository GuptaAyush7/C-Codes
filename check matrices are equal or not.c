#include <stdio.h>

int main() {
	int r, c, a[100][100], b[100][100], sum[100][100], i, j, k;
	printf("Enter the number of rows (between 1 and 100): ");
	scanf("%d", &r);
	printf("Enter the number of columns (between 1 and 100): ");
	scanf("%d", &c);

	printf("\nEnter elements of 1st matrix:\n");
	for (i = 0; i < r; i++)
	    for (j = 0; j < c; j++) {
    		printf("Enter element:");
      		scanf("%d", &a[i][j]);
    	}

	printf("Enter elements of 2nd matrix:\n");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			printf("Enter element:");
			scanf("%d", &b[i][j]);
		}

	for (i = 0; i < r; i++)
    	for (j = 0; j < c; j++) {
			if(a[i][j]==b[i][j])
			k=k+1;
    	}
    
    if (k==4)
    printf("\nMatrices are equal.");
    else
    printf("\nMatrices are not equal.");
    
    return 0;
}
