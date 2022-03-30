/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:47:02 by mleonard          #+#    #+#             */
/*   Updated: 2022/03/29 09:59:15 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

void	ft_swap_pos(char *arr[], int a, int b)
{
	char	*aux_var;

	aux_var = arr[a];
	arr[a] = arr[b];
	arr[b] = aux_var;
}

void	ft_sort_params(int total, char *params[])
{
	int	cur_index;
	int	last_index;

	last_index = 1;
	while (last_index < total)
	{
		cur_index = 1;
		while (cur_index < last_index)
		{
			if (ft_strcmp(params[cur_index], params[last_index]) > 0)
				ft_swap_pos(params, cur_index, last_index);
			cur_index++;
		}
		last_index++;
	}
}

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

	ft_sort_params(argc, argv);
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter++]);
		ft_putchar('\n');
	}
}
