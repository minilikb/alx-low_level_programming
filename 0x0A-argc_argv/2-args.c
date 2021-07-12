#include "holberton.h"

/**
 * main - prints out all args
 * @argc: number of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
