/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhtut <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:19:11 by zhtut             #+#    #+#             */
/*   Updated: 2018/10/30 22:10:57 by zhtut            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] += 'A' - 'a';
		++i;
	}
	while (str[i] != '\0')
	{
		if ((!alphanum(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z')))
			str[i] += +'A' - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += -'A' + 'a';
		++i;
	}
	return (str);
}
