/*
Q 6) If Given matrix is
print diagonals only as
*/

#include<stdio.h>
#define SIZE 3

int main() {

	int m1[SIZE][SIZE];

	//accept 2D array
	printf("\nEnter Matrix : ");
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			scanf_s("%d", &m1[i][j]);
		}
	}


	printf("\nMatrix : \n");

	for (int i = 0; i < SIZE; i++) {

		for (int k = 0; k < i; k++) {
			printf("  ");
		}

		for (int j = i; j < SIZE; j++) {
			if (j == i) {
				printf("%d ", m1[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}