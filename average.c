#include<stdio.h>

float avg(int a,int b,int c);

int main() {
    int num1,num2,num3;
    printf("User! enter a number\n");
    scanf("%d",&num1);

    printf("User! enter a number\n");
    scanf("%d",&num2);

    printf("User! enter a number\n");
    scanf("%d",&num3);

    

    printf("average of numbers are: %f\n",avg(num1,num2,num3));
    return 0;
}

float avg(int a,int b,int c){
    float d;
    d = (float)(a+b+c)/3;
    // printf("%f\n",d);
    return d;
}