#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'a';
        while (lowercase <= 'z')
	{
        if (lowercase != 'q' && lowercase != 'e')
	{
            putchar(lowercase);
        }
        lowercase++;
        }
    putchar('\n');

    return 0;
}
