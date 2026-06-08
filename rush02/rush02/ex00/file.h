/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 19:50:17 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/19 19:59:58 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H
# define PATH_FILE "./numbers.dict.txt"

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_buf_size(char *path);
int		open_read_close(void);
int		ft_split(char *dico);
char	*ft_new_dict(int count);
int		ft_m(int i);
int		ft_value(int *str);

#endif
