/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 20:52:10 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/19 15:50:00 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	divid_10(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	long	nb;

	i = 0;
	nb = n;
	i = divid_10(nb);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	i--;
	if (nb = 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	return (res);
}
