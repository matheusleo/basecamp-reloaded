/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:01:08 by mleonard          #+#    #+#             */
/*   Updated: 2022/04/02 18:37:22 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define FALSE 0
#define TRUE 1

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[++length])
		;
	write (1, str, length);
}

int	is_args_valid(int numb)
{
	if (numb == 2)
		return (TRUE);
	else if (numb == 1)
		ft_putstr("File name missing.\n");
	else if (numb > 2)
		ft_putstr("Too many arguments.\n");
	return (FALSE);
}

int	main(int argc, char *argv[])
{
	unsigned int		file_reference;
	char				file_content[2000];
	unsigned long int	file_length;

	if (!is_args_valid(argc))
		return (0);
	file_reference = open(argv[1], O_RDONLY);
	file_length = read(file_reference, file_content, 2000);
	write(1, file_content, file_length);
}
