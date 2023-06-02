/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <aroberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:55:10 by aroberts          #+#    #+#             */
/*   Updated: 2023/05/19 16:48:53 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../libft.h"

int	strl(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*strd(char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (strl(str) + 1));
	if (!dup)
		return (0);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*get_next_line(int fd)
{
	char	buffer;
	char	line[7000000];
	int		i;
	int		b;

	if (fd < 0)
		return (NULL);
	i = 0;
	b = read(fd, &buffer, 1);
	while (b > 0)
	{
		line[i++] = buffer;
		if (buffer == '\n')
			break ;
		b = read(fd, &buffer, 1);
	}
	line[i] = '\0';
	if (b <= 0 && i == 0)
		return (NULL);
	return (strd(line));
}
/*
int	main(void)
{
	int	fd;

	fd = open("exm.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}*/
