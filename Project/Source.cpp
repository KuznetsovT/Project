#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char s[128] = "nameless";
	scanf("%s", s);
	printf("Hello, %s\n", s);
	return 0;
}