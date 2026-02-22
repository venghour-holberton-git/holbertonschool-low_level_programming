#include <stdio.h>

/**
 * main - doing main
 * 
 * description - print all char except q and e
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++){
		if (c!= 'q' && c!= 'e'){
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
