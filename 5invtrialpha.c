#include <stdio.h>

int main()
{
	int rows;
	int i,j,k;

	printf("Enter Inverted Triangle of Alphabets Rows = ");
	scanf("%d", &rows);

	printf("Printing Inverted Triangle Alphabets Pattern\n");
	int alphabet = 65;

	for (i = 0; i <= rows - 1; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for ( k = 0; k <= rows - i - 1; k++)
		{
			printf("%c ", alphabet + k);
		}
		printf("\n");
	}
	return 0;
}
