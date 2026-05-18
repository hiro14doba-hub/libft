/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:42:19 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:24:46 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = 0;
	srclen = 0;
	i = 0;
	while (dest[destlen] != '\0')
		destlen++;
	while (src[srclen] != '\0')
		srclen++;
	while (i <= size - 1 && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	if (src[1] == '\0')
		return (destlen + i);
	else
		return (destlen + srclen);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char		dest[20] = "hello";
// 	const char	*src = "world";

// 	printf("Return: %zu\n", ft_strlcat(dest, src, 10));
// 	printf("Result: %s\n", dest);
// 	return (0);
// }
