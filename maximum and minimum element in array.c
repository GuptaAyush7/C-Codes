#include <stdio.h>

int main(){
	int a[10]={3, 4, 9, 10, 3, 4, 10, 11, 15, 20}, i, max, min, l;
	l = sizeof(a)/sizeof(a[0]);
	max=min=a[0];
	for (i=0; i<l; i++){
		if (a[i]<min)
		min=a[i];
		if (a[i]>max)
		max=a[i];
	}
	printf("Maximum Element is %d\n", max);
	printf("Minimum Element is %d", min);
}
