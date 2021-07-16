#include "holberton.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Holberton ", NULL, 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
