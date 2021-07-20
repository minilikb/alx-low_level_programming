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
	int num1, num2;
	int (*op)(int, int);

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
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}
