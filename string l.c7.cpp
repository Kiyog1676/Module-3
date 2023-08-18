#include <stdio.h>

int main() {

    char s[100];
    printf("Input String: ");
    fgets(s, sizeof(s), stdin);
    printf("\nLength of the string is = %d", printf("%s"), s);
    return 0;
}