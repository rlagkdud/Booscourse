#include <stdio.h>

int originMelon = 5;
const int price = 10000;

int main() {
	int order = 3;
	int remainMelon = originMelon-order;
	int getPrice = order*price;
	int incomeMoney = getPrice*1.1;
	printf("주문건수 : %d 건\n",order);
	printf("기존 재고량 : %d 개\n",originMelon);
	printf("남은 재고량 : %d 개\n",remainMelon);
	printf("매출액(부가세포함) : %d 원\n",incomeMoney);
	return 0;
}
