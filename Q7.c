/*
Q 7) If Given matrix is
print sum Of each rows
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
		int sum = 0;
		for (int j = 0; j < SIZE; j++) {
			sum = sum + m1[i][j];
		}
		printf(" Sum %d = %d \n",i,sum);

	}

	return 0;
}