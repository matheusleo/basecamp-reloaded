/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:31:11 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/28 21:38:35 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
		ft_putchar(str[index]);
}

int	main(int argc, char *argv[])
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter++]);
		ft_putchar('\n');
	}
}
