/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:40:34 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:23:33 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*g;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	g = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		p[i] = g[i];
		i++;
	}
	return (dest);
}
