#include <stdio.h>

int main(){
    int original_num,product_price,order;
    printf("현재 재고량을 입력해주세요 : ");
    scanf("%d", &original_num);
    printf("현재 해당물품의 가격을 입력해주세요 : ");
    scanf("%d", &product_price);

    while(1){
        int order_num;
        printf("현재 들어온 주문건수를 입력해주세요 : ");
        scanf("%d", &order_num);

        if(order_num > original_num)    printf("주문량이 재고량을 초과합니다!!!\n");
        else{
            order = order_num;
            break;
        }
    }

    printf("주문건수 : %d\n", order);
    printf("기존 재고량 : %d\n",original_num);
    printf("남은 재고량 : %d\n",original_num-order);
    printf("매출액(부가세포함) : %.0f\n", order*product_price*1.1);
}