#include "holberton.h"

/**
 * main - prints out number of args
 * @argc: number of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void) argv;
	return (0);
}
