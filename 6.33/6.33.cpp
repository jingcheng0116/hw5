#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
	if (low <= high) {
		int mid = low + (high - low) / 2;

		// 如果找到關鍵字，則返回索引
		if (arr[mid] == key)
			return mid;

		// 如果關鍵字比中間值小，則在左半部分繼續搜索
		if (arr[mid] > key)
			return binarySearch(arr, low, mid - 1, key);

		// 在右半部分繼續搜索
		return binarySearch(arr, mid + 1, high, key);
	}

	// 若未找到，返回 -1
	return -1;
}

int main() {
	int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 23;

	int result = binarySearch(arr, 0, n - 1, key);

	if (result != -1)
		printf("Element found at index %d.\n", result);
	else
		printf("Element not found in the array.\n");

	return 0;
}
