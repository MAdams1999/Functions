/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:23:14 by madams            #+#    #+#             */
/*   Updated: 2019/07/17 08:30:37 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(void)
{
	char nums;

	nums = '0';
	while (nums <= '9')
	{
		write(1,&nums, 1);
		nums++;
	}
}
