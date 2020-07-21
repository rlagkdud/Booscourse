#include <cs50.h>
#include <stdio.h>

int main(void) {

    int order_num = get_int("주문 건수: ");
    int ex_stock = get_int("재고: ");
    int cur_stock = ex_stock - order_num; 
    int prize = get_int("물품의 가격: ");
    int sales = order_num * prize + order_num * (prize * 0.1);

    if (cur_stock < 0){
        printf("재고가 주문량보다 적습니다\n");
        return false;
    }

    printf("======================\n");
    printf("주문건수: %d\n", order_num);
    printf("기존 재고량: %d\n", ex_stock);
    printf("남은 재고량: %d\n", cur_stock);
    printf("매출액(부가세포함): %d\n", sales);

}
