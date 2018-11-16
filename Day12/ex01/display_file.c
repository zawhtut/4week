/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:50:41 by zhtut             #+#    #+#             */
/*   Updated: 2018/11/08 20:11:14 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

void	ft_error(char *a)
{
	ft_putstr("ft_cat: ");
	ft_putstr(a);
	ft_putstr(": No such file or directory\n");
}

int		ft_file(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buffer;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			ft_stdin();
		else
		{
			fd = open(argv[i], O_RDONLY);
			if (fd >= 0)
			{
				while (read(fd, &buffer, 1) != 0)
					write(1, &buffer, 1);
			}
			else
				ft_error(argv[i]);
			close(fd);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argv[1][0] == '-')
		ft_stdin();
	ft_file(argc, argv);
	return (0);
}
