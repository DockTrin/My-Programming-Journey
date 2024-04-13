#include <stdio.h>

int main()
{
	printf("______________________________________\n");
	printf("A PROGRAM THAT PRINTS A TABLE OF FAHR\nTO CEL CONVERSION IN DESCENDING ORDER");
	printf("\n______________________________________\n");
	int fahr, celsius;
	int lower, upper, step;
	
	printf("Starting from: ");
	scanf("%d",&lower);
	printf("To: ");
	scanf("%d",&upper);
	printf("Steps: ");
	scanf("%d",&step);

	fahr = lower;

	while (fahr > upper){
	    celsius = 5 * (fahr - 32) / 9;
		printf("%3df = \t%dc\n", fahr, celsius);
		fahr = fahr - step;
}/*

	int fahr;

	for (fahr = 300; fahr > 0; fahr = fahr - 20)
			printf("%3df =%6.1fc\n", fahr, (5.0/9.0)*(fahr - 32));
*/
	return (0);
}
