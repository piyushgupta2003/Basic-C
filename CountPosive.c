#include<stdio.h>

int count(int arr[]){
    int n = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]<0){
            n+=1;
            
        }
    }
    return n;
    
}

int main() {
    int arr[]={1,-2,-34,12,-22,9};
    int Pcount = count(arr);
    printf("There are %d negative numbers in given array:",Pcount);


    return 0;
}