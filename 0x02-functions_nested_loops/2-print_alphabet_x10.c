#include "main.h"


	/**
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */
	void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++)
    {
        for (char letter = 'a'; letter <= 'z'; letter++)
        {
            putchar(letter);
        }
        putchar('\n');
    }
}

int main(void)
{
    print_alphabet_x10();
    return 0;
}


