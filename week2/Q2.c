#include <stdio.h>

int main(void) {
	int principal;
	printf("목표금액을 입력하세요: \n");
    scanf("%d", &principal);
    int profit = principal * 0.012;
    int totalMoney = principal + profit;
    printf("만기시 받게 되는 금액은 : %d\n",totalMoney);
	return 0;
}
