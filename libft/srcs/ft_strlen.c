/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <aroberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:45:16 by aroberts          #+#    #+#             */
/*   Updated: 2023/05/19 17:32:14 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlen(const char *c)
{	
	size_t	x;

	x = 0;
	while (c[x] != '\0')
		x++;
	return (x);
}
