#include <stdio.h>

int main(){
	int a[10]={3, 4, 9, 10, 3, 4, 10, 11, 15, 20}, i, sum=0;
	for (i=0; i<10; i++){
		sum=sum+a[i];
	}
	printf("%d", sum);
}
