#include<stdio.h>
int main()
{
	int x, y, z;
	printf("Enter number: "); scanf_s("%d", &x);
	printf("Enter number: "); scanf_s("%d", &y);
	printf("Enter number: "); scanf_s("%d", &z);

	if (x != y && x != z && y != z)
	{
		if (x > y)
			if (x > z)
				printf("%d", x);
			else
				printf("%d", z);
		else if (y > z)
			printf("%d", y);
		else
			printf("%d", z);
	}
	else
		printf("some numbers are equal.");
	return 0;
}