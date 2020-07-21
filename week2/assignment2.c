#include <stdio.h>

int main(void)
{
    int wm = 5;
    int price = 10000;
    int vat = price * 0.1;
    int order;
    while (1)
    {
        printf("주문건수를 입력해주세요 : ");
        scanf("%d", &order);
        if (order <= wm)
        {
            break;
        }
        else
        {
            printf("재고량 보다 많은 주문량입니다.\n");
        }
    }
    printf("주문건수 : %d\n", order);
    printf("기존 재고량 : %d\n", wm);
    printf("남은 재고량 : %d\n", wm - order);
    printf("매출액(부가세포함) : %d\n", (price + vat) * order);
    return 0;
}
