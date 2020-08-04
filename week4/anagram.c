#include <stdio.h>
#include <stdbool.h>
void swap(int *a,int *b);
void sort(int *arr);

int main(void)
{	
	int minIndex = 0;
	int arr1[5] = {1,1,1,3,2};
	int arr2[5] = {2,1,1,3,1};
	int arrnum = (sizeof(arr1)/sizeof(int));	
	bool check = true;
	sort(arr1);
	sort(arr2);
	for(int i = 0;i<arrnum;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			check = false;	
		}
	}
	printf(check? "true":"false");
}
void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void sort(int *arr)
{
	int minIndex = 0;
	for(int i = 0;i<4;i++)
		{
			minIndex = i;
			for(int j = i+1;j<5;j++)
			{
				if(arr[j]<arr[minIndex])
				{
					swap(&arr[j],&arr[minIndex]);
				}
			}
		}
}
