#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int accountnumber;
	float beginningbalance;
	float totalcharges;
	float totalcredits;
	float creditlimit;
	float Balance;

	printf("Enter account number (-1 to end):");
	scanf_s("%d", &accountnumber);

	while (accountnumber != EOF)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &beginningbalance);

		printf("Enter total charges:");
		scanf_s("%f", &totalcharges);

		printf("Enter total credits:");
		scanf_s("%f", &totalcredits);

		printf("Enter credit limit:");
		scanf_s("%f", &creditlimit);
		printf("\n");

		Balance = beginningbalance + totalcharges - totalcredits;

		if (Balance > creditlimit)
		{
			printf("Account:	%d\n", accountnumber);
			printf("Credit limit:	%.2f\n", creditlimit);
			printf("Balance:	%.2f\n", Balance);
			printf("Credit Limit Exceeded.\n\n");
			printf("Enter account number (-1 to end):");
			scanf_s("%d", &accountnumber);
		}

		else
		{
			printf("Enter account number (-1 to end):");
			scanf_s("%d", &accountnumber);
		}

	}
	system("pasue");
	return 0;
}