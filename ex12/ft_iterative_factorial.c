/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:25:45 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/27 20:32:05 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 1)
		total *= (nb--);
	return (total);
}
