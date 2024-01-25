#include<stdio.h>
#include<string.h>

void morning() {
    printf("Hey user!! Good Morning\n");
}

void evening() {
    printf("Hey user!! Good evening\n");
}

void night() {
    printf("Hey user!! Good night\n");
}

int main() {
    char grt[10];
    printf("Hello user! Is it morning, evening, or night?\n");
    scanf("%s", grt); 

    if (strcmp(grt, "morning") == 0) {
        morning();
    } else if (strcmp(grt, "evening") == 0) {
        evening();
    } else if (strcmp(grt, "night") == 0) {

        night();
    } else {
        printf("Invalid input. Please enter morning, evening, or night.\n");
        
    }

    return 0;
}
