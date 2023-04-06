#include <stdio.h>

int main(){
	int n;
	printf("Enter size of array:");
	scanf("%d", &n);
	int a[n], m, i, ele, pos;
	printf("Enter number of elements to be entered:");
	scanf("%d", &m);
	if (m>=n)
	printf("Overflow");
	else{
		for (i=0; i<m; i++){
			printf("Enter the element:");
			scanf("%d", &a[i]);
		}
		printf("Enter Element and Position:");
		scanf("%d%d", &ele, &pos);
		for (i=m-1; i>=pos; i--)
		a[i+1]=a[i];
		a[pos]=ele;
		m++;
		for (i=0; i<m; i++)
		printf("%d ", a[i]);
	}
}
