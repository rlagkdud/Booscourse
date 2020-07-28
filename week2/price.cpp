#include <stdio.h>

void check(int goods,int order,int total_prc)
{
	printf("주문건수: %d\n",order);
	printf("기존 재고량:%d개\n",goods);
	printf("남은 재고량:%d 개\n",goods - order);
	printf("매출액(부가세포함): %d 원\n",total_prc);
}

int main(void)
{
	int goods = 5;
	int order = 3;
	int price = 10000;
	int tax = price * 0.1;
	int total_prc = price + tax;
	check(goods,order,total_prc);
}


