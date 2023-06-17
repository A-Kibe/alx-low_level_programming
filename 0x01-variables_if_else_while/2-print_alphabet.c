#include<stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
	
        while (lowercase <= 'z')
	{
        putchar(lowercase);
        lowercase++;
        }
        putchar('\n');

        return 0;
}

