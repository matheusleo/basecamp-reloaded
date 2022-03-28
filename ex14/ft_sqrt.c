/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:37:56 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/27 20:54:38 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt < (nb / sqrt))
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
