/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_aplha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:45:30 by madams            #+#    #+#             */
/*   Updated: 2019/07/30 00:39:47 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int m;
	int count;

	m = 0;
	count = 0;
	if(ac == 2)
	{
		while(av[1][m] != '\0')
		{
			if(av[1][m] >= 'A' && av[1][m] <= 'Z')
				count = av[1][m] - 'A' + 1; 
			else if (av[1][m] >= 'a' && av[1][m] <= 'z')
				count = av[1][m] - 'a' + 1;
			else
				write(1, &av[1][m], 1);
			while (count)
			{
				write(1,&av[1][m],1);
				count--;
			}
			m++;
		}
	}
	write(1,"\n",1);
	return(0);
}
