#include<stdio.h>


int fibo(int n);

int main() {
    int n;
    printf("User! enter a number upto you want to print series: \n");
    scanf("%d",&n);

    printf("Here is an example for Finonacci Series:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",fibo(i));
    }
    return 0;
}

int fibo(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}
