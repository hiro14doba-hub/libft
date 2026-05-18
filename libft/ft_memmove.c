/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:40:55 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:23:41 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*g;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	g = (const unsigned char *)src;
	if (dest < src)
	{
		while (n--)
			*p++ = *g++;
	}
	else
	{
		while (n--)
			p[n] = g[n];
	}
	return (dest);
}
