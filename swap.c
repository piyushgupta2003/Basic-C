#include<stdio.h>

void no_swap(int a , int b);

void swap(int *a , int *b);

int main() {
    int x = 12;
    int y = 34;
    printf("The value of x,y before swapping is :- %d and %d\n",x,y);

    no_swap(x,y); //call by value
    printf("The value of x,y after swapping is :- %d and %d\n",x,y);
    
    swap(&x,&y); // call by refference
    printf("The value of x,y after swapping is :- %d and %d\n",x,y);
    return 0;
}

void no_swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}