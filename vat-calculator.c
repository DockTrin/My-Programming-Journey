//program to calculate VAT AND PERCENTAGE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    int percent;
//Gets input(number)from the user
    printf("Enter a value: ");
    scanf("%lf", &num);

//Calculates VAT from user input(number)
    double vat = 7.5 * num / 100;
    printf("VAT(7.5%) = %0.2lf\n", vat);
    double total = vat + num;
    printf("Total = %0.2lf\n", total);

//Gets percentage value from the user
    printf("Enter the percentage: ");
    scanf("%i", &percent);

//calculates percentage from user input(number) and display the final results/output
    double percentage = percent * num/100;
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
