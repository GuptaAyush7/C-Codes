# include <stdio.h>

int main(){
	int n;
	printf("Enter the order of matrix:");
	scanf("%d", &n);
	
	int a[n][n], b[n][n];
	int row, col, f=0;
	
	printf("Elements of the matrix:-\n");
	for(row=0; row<n; row++){
		for(col=0; col<n; col++){
			printf("Enter element:");
			scanf("%d", &a[row][col]);
		}
	}
	
	for (row = 0; row < n; row++)
    for (col = 0; col < n; col++) {
    	if(row == col && a[row][col]!=1){
    		f = -1;
    		break;
		}
		else if(row!=col && a[row][col]!=0){
			f = -1;
			break;
		}
    }
    
    if(f == 0)
    printf("Identity Matrix");
    else
    printf("Not Identity Matrix");
	
	return 0;
}
