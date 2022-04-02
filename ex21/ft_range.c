/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:51:42 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/30 22:57:01 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define NIL 0

int	*ft_range(int min, int max)
{
	int	*arr_numbs;
	int	numbs_qte;
	int	index;

	index = 0;
	if (min >= max)
		return (NIL);
	numbs_qte = max - min;
	arr_numbs = (int *)malloc(sizeof(int) * (numbs_qte));
	while (min < max)
	{
		arr_numbs[index] = min;
		min++;
		index++;
	}
	return (arr_numbs);
}
