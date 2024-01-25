// #include<stdio.h>

// int main() {
//     int rev[10];
//     for (int i = 0; i < 10; i++)
//     {
//        printf("Enter the element in array: ");
//        scanf("%d",&rev[i]);

//     }
//     printf("Reverse of an array is : ");

//     for (int i = 9; i >= 0; i++)
//     {
//         printf("%d",rev[i]);
//     }
    
//     return 0;
// }

#include<stdio.h>

void rev (int *arr,int n){
    int temp;
    for (int i = 0 ; i <(n/2); i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main() {
    int arr[] = {1,3,4,6,8,9,10};
    rev(arr , 7);
    for (int i = 0 ; i < 7; i++){
        printf("The value of %d element is : %d\n",i,arr[i]);
    }
    return 0;
}