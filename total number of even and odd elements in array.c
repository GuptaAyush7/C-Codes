#include <stdio.h>

int main(){
	int a[10]={3, 4, 9, 10, 3, 4, 10, 11, 15, 20}, i, count_even=0, count_odd=0;
	for (i=0; i<10; i++){
		if (a[i]%2==0)
		count_even = count_even+1;
		else
		count_odd = count_odd+1;
	}
	printf("Total number of even elements= %d\n", count_even);
	printf("Total number of odd elements= %d", count_odd);
}
