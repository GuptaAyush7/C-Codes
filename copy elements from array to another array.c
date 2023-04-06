#include <stdio.h>

int main(){
	int ar[10]={3, 4, 9, 10, 3, 4, 10, 11, 15, 20}, i, j, l, a[10];
	l=sizeof(ar)/sizeof(ar[0]);
	for (i=0; i<l; i++)
	a[i]=ar[i];
	for (j=0; j<l; j++)
	printf("%d ", a[j]);
}
