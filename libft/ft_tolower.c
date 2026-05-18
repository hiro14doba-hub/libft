/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:45:40 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/07 20:54:07 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = 'A';
// 	printf("%d\n", ft_tolower(c));
// 	printf("%c\n", ft_tolower(c));
// 	return (0);
// }
