#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add int
  * @a: int
  * @b: int
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substract int
  * @a: int
  * @b: int
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - int
  * @a: int
  * @b: int
  *
  * Return: innt
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modular
  * @a: int
  * @b: int
  *
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
