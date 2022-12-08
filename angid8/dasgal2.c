#include <stdio.h>
#include <string.h>
int main() {
	char line[100], i;
	int vowels;
	scanf("%s", &line);
	for(i=0,vowels=0;i<strlen(line);i++) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u' || line[i] == 'y' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' ||
        line[i] == 'O' || line[i] == 'U' || line[i] == 'Y') {
            vowels++;
        }
	}
	printf("Temdeg murt %d egshig baina", vowels);
}
