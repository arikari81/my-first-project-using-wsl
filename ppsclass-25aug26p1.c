/*canteen bill problem*/
#include <stdio.h>
int main(){

    /*declaring initial variables*/
    int num_juice;
    int num_meal;
    int cost_meal = 60;
    int cost_juice = 20;
    int tax_cut = 3;
    int tip;

    /*asking user for input*/
    printf("Enter the number of juices you want: \n");
    scanf("%d", &num_juice);
    
    printf("Enter the number of meals you want: \n");
    scanf("%d", &num_meal);

    /*defining calculations*/
    int totcostjuice = num_juice*cost_juice;
    int totcostmeal = num_meal*cost_meal;
    int subtotal = totcostjuice+totcostmeal;
    float tax_amt = (subtotal/100)*3;

    /*printing the final costs*/
    printf("\t|---------CANTEEN BILL---------|\n");
    printf("\t1. Bought %d JUICES for %d each amounting to Rs. %d total\n", num_juice, cost_juice, totcostjuice);
    printf("\t2. Bought %d MEALS for %d each amounting to Rs. %d total\n", num_meal, cost_meal, totcostmeal);
    printf("\tSub-Total is Rs. %d\n", subtotal);
    printf("\tTax levied at %d per cent amounting to Rs. %.2f\n", tax_cut, tax_amt);

    /*adding tip*/
    printf("\tAmount of gratuity: Rs.");
    scanf("%d", &tip);
    
    /*grand total calculation*/
    float grandtotal = subtotal + tax_amt + tip;
    
    /*charge and closing statments displayed*/
    printf("\tGRAND TOTAL: Rs. %.2f/-\n", grandtotal);
    printf("\t------THANK YOU, ENJOY YOUR MEAL------\n");

    return 0;
}
