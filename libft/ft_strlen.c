/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:43:17 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/07 20:54:12 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "hello";
// 	printf("%d", ft_strlen(s));
// 	return (0);
// }
