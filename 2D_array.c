#include <stdio.h>

// Function prototype
void display(int stu, int sub, int marks[stu][sub]);

int main()
{
    int stu = 2;
    int sub = 3;

    int marks[2][3];

    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("Enter the marks of student %d in subject %d:", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Call the display function with appropriate arguments
    display(stu, sub, marks);

    return 0;
}

// Function definition for display
void display(int stu, int sub, int marks[stu][sub])
{
    printf("Values of students and marks are:\n");
    for (int i = 0; i < stu; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("{ %d, %d}\n", *marks[i],*marks[j]);
        }
    }
}
