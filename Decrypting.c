#include <stdio.h>


void decrypt(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main() {
   char str[] = "jmmmpppppwfffzpvv" ;

    decrypt(str);
    printf("Your decrypted message is: %s\n", str);

    
    return 0;
}
