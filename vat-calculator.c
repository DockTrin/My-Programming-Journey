/*program to calculate VAT AND PERCENTAGE*/
#include <stdio.h>

int main()
{
    double num, markup_percentage;
    int percent;
/*Gets input(amount)from the user*/
    printf("Enter a value (amount): ");
    scanf("%lf", &num);
    printf("Enter mark-up Percentage(if any, else enter 0): ");
    scanf("%lf", &markup_percentage);
    double mark_up = (num * markup_percentage) / 100;
    printf("15% Mark-up = %0.2lf\n",mark_up);
    double subtotal = mark_up + num;
    printf("Sub-total = %0.2lf\n", subtotal);

/*Calculates VAT from user input(number)*/
    double vat = 7.5 * subtotal / 100;
    printf("VAT(7.5%) = %0.2lf\n", vat);
    double total = vat + subtotal;
    printf("Total = %0.2lf\n", total);

/*Gets percentage value from the user*/
    printf("Enter the percentage: ");
    scanf("%i", &percent);

/*calculates percentage from user input(number) and display 
 * the final results/output
 */
    double percentage = percent * subtotal/100;
    double percentage_vat = 7.5 * percentage/100;
    double grandTotal = percentage_vat + percentage;

    printf("%i percent of %0.2lf = %0.2lf\n  VAT(7.5%) for %i percent = %0.2lf\n Total inclusive of VAT  = %0.2lf", percent, num, percentage, percent, percentage_vat, grandTotal);


/*
    //Getting input(values)from user
    printf("Enter a value: ");
    scanf("%lf", &num);

    //calculates the percentage and VAT, stores it in result and Vat variable respectively
    double result = percent * num/100;
    printf("%i percent of %0.2lf = %0.2lf\n", percent, num, result);
    double vat = 7.5 * num/100;
    printf("VAT(7.5%) = %0.2lf\n ", vat);
    double total = vat + num;

    printf("Total(Inclusive of VAT)= %0.2lf\n",total);

*/
    return 0;
}
