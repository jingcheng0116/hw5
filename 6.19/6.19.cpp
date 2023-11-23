#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dice1, dice2, total;
	int counts[13] = { 0 }; // 0 to 12 for indices 2 to 12

	srand(time(0)); // Seed the random number generator with current time

	// Simulate 36,000 throws
	for (int i = 0; i < 36000; i++) {
		dice1 = (rand() % 6) + 1; // Random number between 1 and 6 for dice 1
		dice2 = (rand() % 6) + 1; // Random number between 1 and 6 for dice 2
		total = dice1 + dice2; // Calculate total points

		counts[total]++; // Increment the count for the total points
	}

	printf("Total\tOccurrences\n");
	printf("-----\t-----------\n");

	// Print the occurrences of each total
	for (int i = 2; i <= 12; i++) {
		printf("%d\t%d\n", i, counts[i]);
	}

	return 0;
}
