/* hex2bin
 * Takes a ascii hexadecimal string
 * returns a ascii binary string
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* hex2bin(const char* hex)
{
	int len = strlen(hex);
	char* bin = malloc(4*len*sizeof(char));
	*bin = '\0';

	while(*hex) {
		switch(*hex) {
		case '0':
			strcat(bin, "0000");
			break;
		case '1':
			strcat(bin,	"0001");
			break;
		case '2':
			strcat(bin, "0010");
			break;
		case '3':
			strcat(bin, "0011");
			break;
		case '4':
			strcat(bin, "0100");
			break;
		case '5':
			strcat(bin, "0101");
			break;
		case '6':
			strcat(bin,	"0110");
			break;
		case '7':
			strcat(bin, "0111");
			break;
		case '8':
			strcat(bin, "1000");
			break;
		case '9':
			strcat(bin, "1001");
			break;
		case 'A': case 'a':
			strcat(bin, "1010");
			break;
		case 'B': case 'b':
			strcat(bin, "1011");
			break;
		case 'C': case 'c':
			strcat(bin, "1100");
			break;
		case 'D': case 'd':
			strcat(bin, "1101");
			break;
		case 'E': case 'e':
			strcat(bin,	"1110");
			break;
		case 'F': case 'f':
			strcat(bin, "1111");
			break;
		default:
			printf("error\n");
			exit(1);
		}
		++hex;
	}

	return bin;
}


int main()
{
	char input[512+1];
	do {
		fscanf(stdin, "%512s", input);
		char* ans;
		ans = hex2bin(input);
		printf("%s\n", ans);
		free(ans);
	} while (strlen(input) == 512);
	return 0;
}
