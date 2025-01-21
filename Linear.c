#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array element:\n");
    for(int i =0 ; i<n ; i++){
        printf("Enter element at arr[%d] index || %d position:",i,i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i =0 ; i<n ; i++){
        printf("[%d] ",arr[i]);
    }


    return 0;
}