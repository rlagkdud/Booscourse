#include <stdio.h>
#include <stdlib.h>

int sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return *arr;
}

int main(void)
{
    int N;
    scanf("%d", &N);

    int *nums;
    nums = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        nums[i] = tmp;
    }

    sort(nums, N);

    for (int i = 0; i < N; i++)
    {
        int tem = nums[i];
        for (int j = i + 1; j < N; j++)
        {
            if (tem == nums[j])
            {
                nums[j] = -1;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (nums[i] != -1)
        {
            printf("%d ", nums[i]);
        }
    }
    printf("\n");
    free(nums);
}
