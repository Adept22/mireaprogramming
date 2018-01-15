#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, m = 0, n = 0, min = 0, max = 0;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	int **array = (int**)malloc(m*sizeof(int*)), *mins_arr = (int*)malloc(m*sizeof(int));

	for (i = 0; i < m; i++)
		array[i] = (int*)malloc(n*sizeof(int));

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			array[i][j] = rand() % 50 - 10;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

	printf("\n--------------\n\nMinimum: ");
	
	for (i = 0; i < m; i++) {
		min = array[i][0];
		for (j = 0; j < n; j++) {
			if (array[i][j] < min) {
				min = array[i][j];
			}
		}
		mins_arr[i] = min;
		printf("%d ", mins_arr[i]);
	}

	printf("\n\n--------------\n");

	max = mins_arr[0];
	for (i = 0; i < m; i++) {
		if (mins_arr[i] > max) {
			max = mins_arr[i];
		}
	}
	
	printf("\nMax of minimum: %d\n", max);

	return 0;
}
