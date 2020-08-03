#include <stdio.h>
void bubble_sort(int arr[]);

int main(void){
    int arr1[5]={1,1,1,3,2};
    int arr2[5]={2,1,1,3,1};
    bubble_sort(arr1);
    bubble_sort(arr2);
    
    for(int i = 0; i<5; i++){
        if(arr1[i]!=arr2[i]){
            printf("False\n");\
            return 1;
        }
    }
    printf("True\n");
    return 0;
}


void bubble_sort(int arr[]){
    int temp;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

