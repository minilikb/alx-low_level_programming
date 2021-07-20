#include "3-calc.h"

/**
 * main - calculator program
 * @argc: number of arguments
 * @argv: array of arguments as strings
 *
 * Return: int result of op
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}
