#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch[8] = "_putchar";
		int i = 0;
		char c;

		while(i<= 8){
			c = ch[i];
			_putchar(c);
			i++;

}
{
	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
return (write(1, &c, 1));
}
