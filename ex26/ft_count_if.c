/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:38:26 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/02 16:00:41 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	index;
	int	if_counter;

	index = -1;
	if_counter = 0;
	while (tab[++index][0] != '0')
	{
		if (f(tab[index]) == 1)
			if_counter++;
	}
	return (if_counter);
}
