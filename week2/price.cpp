#include <stdio.h>

void check(int goods,int order,int total_prc)
{
	printf("�ֹ��Ǽ�: %d\n",order);
	printf("���� ���:%d��\n",goods);
	printf("���� ���:%d ��\n",goods - order);
	printf("�����(�ΰ�������): %d ��\n",total_prc);
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


