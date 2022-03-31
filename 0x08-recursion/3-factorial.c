#include "main.h"

/**
 * factorial - returns the factorial of a givien number
 *
 * @n: integer or given number
 * Return: always 0 (succes).
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
