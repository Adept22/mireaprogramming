#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char *check(char letter) {
	char eng_letters[10] ="AEIOUaeiou";
	int i = 0;
	for(i = 0; i < 10; i++) {
		if(letter == eng_letters[i]) {
			char *result = (char *) malloc(4 * sizeof(char));
			strcpy(result, "true");
			return result;
		}
	}
	char *result = (char *) malloc(5 * sizeof(char));
	strcpy(result, "false");
	return result;
}

int main(int argc, char *argv[]) {
	char letter;
	
	printf("Enter character: ");
	scanf("%c", &letter);
	
	char *res = check(letter);
	
	printf("\nVowel? %s", res);
	
	return 0;
}
