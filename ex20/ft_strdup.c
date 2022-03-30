/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:07:56 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/29 22:44:20 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		s_length;
	int		d_index;
	char	*dest;

	d_index = 0;
	s_length = 0;
	while (src[s_length])
		s_length++;
	dest = (char *)malloc(sizeof(char) * s_length);
	while (d_index < s_length)
	{
		dest[d_index] = src[d_index];
		d_index++;
	}
	dest[d_index] = '\0';
	return (dest);
}
