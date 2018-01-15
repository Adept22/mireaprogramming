#include <stdio.h>
#include <stdlib.h>

#define SIZ 7
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char buf[SIZ];
    char contr[] = "0123456789ABCDEFabcdef\n";
    while (fgets(buf, SIZ, stdin) && *buf != '\n')
        printf("%s\n", (strlen(buf) == strspn(buf, contr)) ? "HEX" : "NOT HEX");
	
	return 0;
}
