#include<stdio.h>

int main() {
    int fact = 1,num;
    printf("enter a number:\n");
    scanf("%d",&num);

    while (num!=0)
    {
        fact *= num;
        num--;
    }
    printf("factorial of a number will be: %d \n",fact);
    
    
    return 0;
}