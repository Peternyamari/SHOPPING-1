#include <stdio.h>
#include <stdlib.h>

int main()
{
    char item1[20];
    char item2[20];

    double item1_price;
    double item2_price;
    double item1_quantity;
    double item2_quantity;
    double all_items_total_cost;
    double total_cash_at_hand;

    printf("ENTER FIRST ITEM: ");
    scanf("%s" ,&item1);
    printf("ENTER ITEM 1 QUANTITY IN KGS:");
    scanf("%lf" ,&item1_quantity);
    printf("ENTER ITEM 1 PRICE PER KG:");
    scanf("%lf" ,&item1_price);
    printf("TOTAL CASH : %f\n" ,item1_quantity*item1_price);

    printf("ENTER SECOND ITEM: ");
    scanf("%s" ,&item2);
    printf("ENTER ITEM 2 QUANTITY IN LITRES:");
    scanf("%lf" ,&item2_quantity);
    printf("ENTER ITEM 2 PRICE PER LITRE:");
    scanf("%lf",&item2_price);
    printf("TOTAL CASH: %f\n",item2_quantity*item2_price);

    printf("TOTAL COST OF ALL ITEMS: %lf\n" ,item1_quantity*item1_price+item2_quantity*item2_price);

    printf("ENTER TOTAL CASH AT HAND:");
    scanf("%lf",&total_cash_at_hand);
    printf("CHANGE: %f",item1_quantity*item1_price+item2_quantity*item2_price-total_cash_at_hand);





    return 0;
}
