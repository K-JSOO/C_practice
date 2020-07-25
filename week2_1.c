#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int inven=5;
    float price=10000;
    int new = get_int("몇 개 사실건가요?\n");
    printf("주문건수 : %i건\n", new);

    if ( inven!=0 )
    {
        printf("기존 재고량 : %i개\n",inven);
        inven -= new;
        printf("남은 재고량 : %i개\n",inven);
        printf("매출액(부가세포함) : %.2f원",price*1.01);
    }
    else
    {
        printf("재고가 없습니다");
    }
}
