/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:44:48 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/07 20:54:09 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i != 0)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	s = "hello";
// 	c = 'e';
// 	printf("%c");
// 	return (0);
// }
