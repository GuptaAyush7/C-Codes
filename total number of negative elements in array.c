#include <stdio.h>

int main(){
	int a[10]={-3, 4, -9, 10, 3, -4, -10, 11, -15, 20}, i, count_negative=0;
	for (i=0; i<10; i++){
		if (a[i]<0)
		count_negative+=1;
	}
	printf("Number of negative elements= %d", count_negative);
}
