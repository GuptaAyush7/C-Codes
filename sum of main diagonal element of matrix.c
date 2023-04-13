#include <stdio.h>

int main() {
	int r, c, a[100][100], s=0, i, j;
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

  
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			if (i == j)
			s = s+a[i][j];
    	}

	printf("\nSum of main diagonal element is: %d", s);

	return 0;
}

