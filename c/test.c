#include "hex2bin.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char input[512+1];
    printf("HEX: ");
    while(fgets(input, sizeof input, stdin)) { /* read until end of input */
        /* remove \n character from end of string */
        char *pos=input;
        if (NULL != (pos = strchr(pos, '\n'))) *pos = '\0';

        if (strlen(input) == 0) break; /* stop on empty string */

		char* ans = NULL;
		ans = hex2bin(input);
		printf("BIN: %s\n", ans);
		free(ans);
        printf("HEX: ");
	}
	return 0;
}

