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

	s = 'B';
	printf("%c: %d\n", s, _isupper(s));
	s = 'a';
	printf("%c: %d\n", s, _isupper(s));
	return (0);
}
