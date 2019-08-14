#include <unistd.h>

void ptnb(int n)
{
	char	c;

	if (n > 9)
		ptnb(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				write(1, "fizz", 4);
			if (i % 5 == 0)
				write(1, "buzz", 4);
		}
		else
			ptnb(i);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}
