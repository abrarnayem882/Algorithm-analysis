#include<stdio.h>
int main(){
    int n ,s ,ind=-1;
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

    printf("\n");
    printf("Enter the element you want to search :");
    scanf("%d",&s);

    for(int i = 0 ; i<n ; i++){
        if(arr[i]==s){
            ind=i;
            break;
        }
    }
    if(ind!=-1){
        printf("Element found at index arr[%d]  || %dno. position.",ind , ind+1);
    }else{
        printf("Element not found.");
    }


    return 0;
}