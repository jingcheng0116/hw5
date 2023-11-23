#include <stdio.h>

void stringReverse(char str[]) {
	if (str[0] == '\0') {
		return; 
	}
	else {
		stringReverse(&str[1]); 
		printf("%c", str[0]); 
	}
}

int main() {
	char inputString[] = "Hello, world!";

	printf("Original string: %s\n", inputString);
	printf("Reversed string: ");
	stringReverse(inputString);
	printf("\n");

	return 0;
}
