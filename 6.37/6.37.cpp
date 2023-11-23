#include <stdio.h>

int recursiveMaximum(int arr[], int size) {
	if (size == 1) {
		return arr[0]; 
	}
	else {
		int maxOfRest = recursiveMaximum(arr, size - 1); 
		return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest; 
	}
}

int main() {
	int arr[] = { 10, 24, 6, 45, 37, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int max = recursiveMaximum(arr, size);

	printf("The maximum element in the array is: %d\n", max);

	return 0;
}
