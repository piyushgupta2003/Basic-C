#include <stdio.h>

void encrypt(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main() {
    char str[100];
    printf("Print Your message:\n");
    gets(str);
    encrypt(str);
    printf("Your encrypted message is: %s\n", str);

    return 0;
}
