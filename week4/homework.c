#include<stdio.h>

void bubblesort(int arr[]);
void compare_arr(int arr[],int arr1[]);

int main(){
	int arr1[5] = {1,4,2,5,8};
	int arr2[5] = {2,5,4,3,1};
	bubblesort(arr1);
	bubblesort(arr2);
	compare_arr(arr1,arr2);
}

void bubblesort(int arr[]){
	int temp;
  	for (int i=0; i < 5; i++){
    	for (int j=0; j < 5 - i - 1; j++){
      		if (arr[j] > arr[j+1]){
        		temp = arr[j];
        		arr[j] = arr[j+1];
        		arr[j+1] = temp;
      		}
    	}
  	}
}

void compare_arr(int arr[],int arr1[]){
	int flag=1;
	for(int i=0; i<5; i++){
		if(arr[i] != arr1[i]){
			flag = 0;
			break;
		} 
	}
	if(flag) printf("True");
	else printf("False");
}