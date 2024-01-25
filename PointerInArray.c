#include<stdio.h>

int main() {
      int marks[5];
      int *ptr;
      ptr = &marks[0];
    for (int i = 0; i < 5; i++)
    {
       printf("Enter the marks of student %d :\n",i+1);
       scanf("%d",ptr);
       ptr++;
      
    }
 printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("you have entered value as: %d\n",marks[i]);
    }
    
    return 0;
}