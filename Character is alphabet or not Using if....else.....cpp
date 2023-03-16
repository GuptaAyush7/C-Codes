#include <stdio.h>

int main(){
	char ch;
	printf("Enter Value:");
	scanf("%c", &ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		printf("Entered value is a character");
	}
	else{
		printf("Entered value is not a character");
	}
	return 0;
}
