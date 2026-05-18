/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _isalnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:34:10 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/07 20:54:34 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 's';
// 	printf("%d", ft_isalnum(c));
// 	return (0);
// }
