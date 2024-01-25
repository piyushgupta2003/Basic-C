#include<stdio.h>

void printPattern(int n);

int main() {
    int n = 3;
    printPattern(n);
    return 0;
}

void printPattern(int n){
    int i,j;
    for (i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
}