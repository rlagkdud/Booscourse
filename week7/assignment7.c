#include <stdio.h>
#include <stdlib.h>

int *divisor;

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N;
    scanf("%d", &N);

    divisor = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        divisor[i] = tmp;
    }

    qsort(divisor, N, sizeof(int), compare);
    /*
    for(int i=0; i<N; i++){
        printf("%d ",divisor[i]);
    }
    printf("\n");
*/
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (divisor[i] == 0)
        {
            count++;
        }
        else
        {
            break;
        }

        int answer = divisor[count] * divisor[N - 1]; /**여기를 채우세요.**/
        ;
        printf("%d\n", answer);

        return 0;
    }
