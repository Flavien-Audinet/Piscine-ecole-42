/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:03:35 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/04 19:24:43 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int x, int y, int a)
{
     while (a <= x)
     {
         if (a == 1)
		 {
			 write(1, "B", 1);
             a++;
         }
         else if (a == x)
         {
         	write(1, "B", 1);
            a++;
            if (a == x + 1)
			{
                write(1, "\n", 1);
            }
        }
        else
        {
            write(1, " ", 1);
            a++;
		}
	}
}

void	rush1(int x, int y, int a)
{
	while (a <= x)
	{
		if (a == 1)
		{
			write(1, "A", 1);
			a++;
		}
		else if (a == x)
		{
			write(1, "C", 1);
			a++;
			if (a == x + 1)
			{
				write(1, "\n", 1);
			}
		}
		else
		{
			write(1, "B", 1);
			a++;
		}
	}
	ft_print(x, y, a);
}

void	rush(int x, int y)
{
	x = x;
	y = y;
	int a;
	a = 1;
	if (x <= 0 || y <= 0)
		return ;
	rush1(x, y, a);
}

int main()
{
	rush(7, 7);
}
