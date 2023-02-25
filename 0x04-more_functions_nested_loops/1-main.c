#include<stdio.h>
#include "main.h"

/**
 * main - Entry pont
 *
 * Return: always 0
 */
int main(void)
{
	char s;

	s = '0';
	printf("%c: %d\n", s, _isdigit(s));
	s = 'a';
	printf("%c: %d\n", s, _isdigit(s));
	return (0);
}
