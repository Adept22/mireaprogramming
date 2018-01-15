#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float y, i;
	for(i = -2.00; i <= 2.00; i += 0.50) {
		y = (-2.4 * (i * i)) + (5 * i) - 3;
		printf("y = %f\n", y);
	}
	system("pause");
	return 0;
}
