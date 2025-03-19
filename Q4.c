/*
Q 4) If Given matrix is print lower part only as
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

		for (int j = 0; j <= i; j++) {
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}

	return 0;
}