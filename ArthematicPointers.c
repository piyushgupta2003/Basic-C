#include<stdio.h>

int main() {
    int i = 12;
    int *ptr = &i;

    printf("The value of the pointer ptr is %u\n",ptr);

    int *ptr2;
    ptr2 = &ptr;
    ptr2++;

    printf("The value of the pointer ptr2 is %u\n",&ptr2);

    printf("The value of the pointer ptr is %u\n",ptr-ptr2);

    return 0;
}