#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float money = get_float("How many save your money?\n");
    float re_money = money * 1.012;
    printf("After 1 year, your money is %.2f\",re_money);
}
