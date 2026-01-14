#include <stdio.h>
#include <string.h>

int main() {
	char str1[100];  // First string
	char str2[100];  // Second string
    
    fgets(str1,sizeof(str1),stdin);
	fgets(str2, sizeof(str2),stdin);
	int result = strcmp(str1,str2);

	if (result == 0) {
		printf("equal\n");
	} else if (result < 0) {
		printf("str1 is less than str2\n");
	} else {
		printf("str1 is greater than str2\n");
	}
	
	return 0;
}
