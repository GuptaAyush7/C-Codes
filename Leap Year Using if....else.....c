#include <stdio.h>

int main(){
	int a;
	printf("Enter Year:");
	scanf("%d", &a);
	if((a%4==0)&&((a%100!=0)||(a%400==0))){
		printf("Entered year is a Leap Year")
	}
	else{
		printf("Entered year is not a Leap Year");
	}
	return 0;
}
