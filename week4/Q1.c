#include <stdio.h>

void swap(int arr[], int x, int y)
{
    int tmp = arr[x];
    arr[x] = arr[y];
    arr[y] = tmp;
}
int partition(int arr[], int left, int right)
{
    int pv = arr[left];
    int low = left + 1;
    int high = right;
 
    while (low <= high)
    {
        while (low <= right && pv >= arr[low])
        {
            low++;
        }
        while (high >= (left+1)  && pv <= arr[high])
        {
            high--;
        }
        if (low <= high)
        {
            swap(arr, low, high);
        }
    }
    swap(arr, left, high);
    return high;
 
}
 
 
void QuickSort(int arr[], int left, int right)
{
    if (left <= right)
    {
        int pv = partition(arr, left, right);
        QuickSort(arr, left, pv - 1);
        QuickSort(arr, pv + 1, right);
    }
}
 
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {5,4,3,2,1};
	
	QuickSort(arr1,0,4);
    QuickSort(arr2,0,4);

    for(int i = 0 ; i < 5 ; i++){
		if(arr1[i]!=arr2[i]){
			printf("False");
			return 0;
		}
    }
	printf("True");

    return 0;
}
