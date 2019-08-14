/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:42:11 by madams            #+#    #+#             */
/*   Updated: 2019/08/08 09:29:33 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mlx.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	deal_key(int key, void *param)
{
	ft_putchar('X');
	return(0);
}
void line_put(void *mlx_ptr, void *win, int x, int y, int len, int color){
	while(len-- > 5)
		mlx_pixel_put(mlx_ptr, win, x+len, y+len, color);
}
int	main()
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 600, "mlx window");
	mlx_string_put(mlx_ptr,win_ptr,0, 0, 0xff2400,"--------------------------------------------------------------------------------------------------------");
	mlx_string_put(mlx_ptr,win_ptr,400,300, 0x0080fe,"I AM GOD");
	line_put(mlx_ptr, win_ptr, 400, 30,10,0x0080fe);
	mlx_loop(mlx_ptr);
}
