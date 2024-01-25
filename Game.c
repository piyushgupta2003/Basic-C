#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random,guess,count=1;
    srand(time(0));
    random = rand()%100 + 1;
 
    do {
        printf("guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>random){
            printf("lower number please!!\n");
        }
        else if (guess<random){
            printf("higher number please!!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",count);
        }
        count++;
    }while(guess!=random);
    
    return 0;
}