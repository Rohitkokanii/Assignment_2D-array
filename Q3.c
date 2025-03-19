/*
Q 3) multiplication of two matrix
*/

#include<stdio.h>
#define SIZE 3


int main() {

	int m1[SIZE][SIZE];
	int m2[SIZE][SIZE];
	int res[SIZE][SIZE];

	printf("\nEnter 3*3 Matrix 1st : ");
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			scanf_s("%d", &m1[i][j]);
		}
	}

	printf("\nEnter 3*3 Matrix 2nd : ");
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			scanf_s("%d", &m2[i][j]);
		}
	}

	//mul
	for (int r = 0; r < SIZE; r++) {
		for (int i = 0; i < SIZE; i++) {
			int sum = 0;
			//int val = 0;
			for (int j = 0; j < SIZE; j++) {
				sum = sum + (m1[r][j] * m2[j][i]);
			}
			res[r][i] = sum;
		}
	}


	//Display 
	printf("\nMultiplication is : ");
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}

	return 0;
}