#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 no error, non zero if errror
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
