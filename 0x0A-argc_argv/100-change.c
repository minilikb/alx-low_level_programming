#include "holberton.h"

/**
 * main - prints out minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int count = 0, money = 0, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (; argv[1][i]; i++)
	{
		if (argv[1][i] < 47 || argv[1][i] > 57)
		{
			printf("Error\n");
			return (1);
		}
	}
	money = atoi(argv[1]);
	if (money <= 0 )
	{
		printf("%d\n", 0);
		return (0);
	}
	while (money >= 1)
	{
		if (money >= 25)
		{
			count = count + money / 25;
			money = money % 25;
			continue;
		}
		else if (money >= 10)
		{
			count = count + (money / 10);
			money = money % 10;
			continue;
		}
		else if (money >= 5)
		{
			count = count + (money / 5);
			money = money % 5;
			continue;
		}
		else if (money >= 2)
		{
			count = count + (money / 2);
			money = (money % 2);
			continue;
		}
		else
		{
			count++;
			money = 0;
			break;
		}
	}
	printf("%d\n", count);
	return (0);
}
