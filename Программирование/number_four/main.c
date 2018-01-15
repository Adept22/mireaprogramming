#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0, j = 0, arr_len = 0;

	printf("Enter array length: ");
	scanf("%d", &arr_len);
	
	if(arr_len > 1) {
		float arr[arr_len];
		
		for(i = 0; i < arr_len; i++) {
			printf("Enter nuber %d: ", i + 1);
			scanf("%f", &arr[i]);
		}
		
		system("cls");
		
		printf("Array: ");
		
		for(i = 0; i < arr_len; i++) {
			printf("%f ", arr[i]);
		}
		
		for(i = 1; i < arr_len; i++) {
			if(arr[i] <= arr[i - 1]) {
				printf("\n\nNOT increasing sequence.\n");
				return 0;
			}
		}
		printf("\n\nIncreasing sequence.\n");
	} else {
		printf("\nLength must be more then 1.\n");
	}
	
	return 0;
}
