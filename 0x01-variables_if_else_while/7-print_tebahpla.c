#include<stdio.h>
/**
 * main - printing alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	return (0);
}
