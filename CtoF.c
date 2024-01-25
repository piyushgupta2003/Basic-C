#include<stdio.h>

float faren(float cel);

int main() {
    float cel;
    printf("User! enter celcius temperature \n");
    scanf("%f",&cel);

    printf("Temperature in fahrenheit is:%f\n",faren(cel));
    return 0;
}

float faren(float cel){
    float result;
    result = (cel * 9/5) + 32;
    return result;
}