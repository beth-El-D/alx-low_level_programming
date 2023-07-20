#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns theproduct of the two numbers
 * @a: the first number
 * @b: the second number
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - returns the division of th ewo numbets
 * @a: first number
 * @b: second number
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder from the division of the two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
