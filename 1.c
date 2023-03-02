#include <stdio.h>

int main(){
	int a, b;
	printf("Enter Value Of a and b:");
	scanf("%d %d", &a, &b);
	if (a>b){
		printf("%d is greater than %d", a, b);
	}
	else{
		printf("%d is greater than %d", b, a);
	}
}
