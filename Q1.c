/*
Q 1) addittion of two matrix
*/

#include<stdio.h>
#define SIZE 3


int main() {

	int m1[SIZE][SIZE];
	int m2[SIZE][SIZE];
	int r[SIZE][SIZE];

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

	//add
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			r[i][j] = m1[i][j] + m2[i][j];
		}
	}


	//Display 
	for (int i = 0; i < SIZE; i++) {

		for (int j = 0; j < SIZE; j++) {
			printf("%d ",r[i][j]);
		}
		printf("\n");
	}

	return 0;
}