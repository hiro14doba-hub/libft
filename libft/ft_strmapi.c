/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:41:53 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:25:08 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_strlen(const char *s)
{
    int len;
    len = 0;
    while(s[len] != '\0')
        len++;
    return(len);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    int len;
    char *res;
    i = 0;
    if(!s || !f)
        return(NULL);
    len = ft_strlen(s);
    res = (char *)malloc(sizeof(char) * (len+1));
    if(!res)
        return(NULL);

    while(s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return(res);
}
