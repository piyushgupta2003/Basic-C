#include<stdio.h>

int main() {
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
       printf("Enter the marks of student %d :",i+1);
       scanf("%d",&marks[i]);
      
    }
 printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("you have entered value as: %d\n",marks[i]);
    }
    
    
    return 0;
}