#include <stdio.h>

int main(void)
{
	char season[20];
	char verb1[20];
	char adjective[20];
	char verb2[20];
	char noun1[20];
	char verb3[20];
	char verb4[20];
	char noun2[20];
	char noun3[20];
	char time_span[20];

	printf("Enter a season: ");
	scanf("%s",season);
	printf("Enter a verb: ");
	scanf("%s",verb1);
	printf("Enter an adjective: ");
	scanf("%s", adjective);
	printf("Enter another verb: ");
	scanf("%s", verb2);
	printf("Enter a noun: ");
	scanf("%s", noun1);
	printf("Enter a verb: ");
	scanf("%s",verb3);
	printf("Enter another verb again: ");
	scanf("%s",verb4);
	printf("Enter a noun: ");
	scanf("%s", noun2);
	printf("Enter another noun: ");
	scanf("%s",noun3);
	printf("Enter Time span: ");
	scanf("%s",time_span);


	printf("\nWhen you are in love, everyday feels like %s,.",season);
	printf("The sun is always %s, the air feels %s, and the birds",verb1, adjective);
	printf("are always %s. You see the world through rose-colored %s.",verb2,noun1);
	printf("When you see the person you love your heart %s. You can't %s", verb3,verb4);
	printf("because they take you %s away. the person you love is always on your %s and you can't imagine a %s without them.",noun2,noun2,time_span);
	return (0);
}
