#include <stdio.h>

int main(){
	int a[10]={-3, 4, -9, 10, 3, -4, -10, 11, -15, 20}, i;
	for (i=0; i<10; i++){
		if (a[i]<0)
		printf("%d ", a[i]);
	}
}
