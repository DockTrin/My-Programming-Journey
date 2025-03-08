#include <stdio.h>

int main(void)

{
	char username[30];
	char password[30];
	printf("Please provide your username and password\n(passwords will be displayed as asterisk):\n");
	printf("Username:");
	scanf("%s", username);
	printf("Password:");
	scanf("%s", password);
	printf("Hello %s,  repo access granted successfully, have fun!\n",username);
}
