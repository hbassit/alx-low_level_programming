#include <stdio.h>

/**
 *main - function to print numbers for 01 to 89 with no repititions
 *Return: 0
 */

int main(void)
{
	int i, j, num_loop;

	i = '0' + 0;
	num_loop = 0;

	while (i < '0' + 9)
	{
		num_loop++;
		j = '0' + num_loop;
		while (j < '0' + 10)
		{
			putchar(i);
			putchar(j);
			if (i == '0' + 8)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
				j++;
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
