/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:40:17 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:23:24 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	const unsigned char	*g;

	p = (const unsigned char *)s1;
	g = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] == g[i])
			i++;
		else
			return (p[i] - g[i]);
	}
	return (0);
}
