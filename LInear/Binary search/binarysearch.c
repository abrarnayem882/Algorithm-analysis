#include<stdio.h>

int binarysearch(int arr[] , int n , int target){
    int min = 0 ;
    int max=n-1;
    while(min <= max){
        int mid=min + (max-min)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return -1;
}

int main(){
int n , target,result;
printf("Enter the array size : ");
scanf("%d",&n);
int arr[n];

printf("Enter the array element in ascending order: \n");
for(int i=0 ; i<n ; i++){
        printf("Enter element at arr[%d] index || %d position:",i,i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    for(int i =0 ; i<n ; i++){
        printf("[%d] ",arr[i]);
    }

    printf("\n");
    printf("Enter the element you want to search :");
    scanf("%d",&target);

    result=binarysearch(arr , n ,target );

        if (result != -1) {
        printf("Element %d found at index arr[%d] || %dno. position.\n", target, result,result+1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;

}