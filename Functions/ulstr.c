#include <unistd.h>

int main(int ac, char *av[])
{
	int m;
	char letter;

	m = 0;
	if (ac == 2)
	{
		while(av[1][m])
		{
			letter = av[1][m];
				if(av[1][m] >= 'A' && 'Z' >= av[1][m])
					letter = letter - 'A' + 'a';
				else if(av[1][m] >= 'a' && 'z' >= av[1][m])
					letter = letter - 'a' +'A';
			write(1,&letter,1);
			m += 1;
		}
	}
	write(1,"\n",1);
	return(0);
}
