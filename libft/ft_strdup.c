/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 20:56:20 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:24:20 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strdup(const char *s)
{
    char *dest;
    int i;
    int len;
    i = 0;
    len = 0;
    if(!s)
        return(NULL);
    while(s[len] != '\0')
        len++;

    dest = (char *)malloc(sizeof(char)*(len+1));
    if(!dest)
        return(NULL);
    while(i<len)
    {
        dest[i] == s[i];
        i++;
    }
    return(dest);
}

// #include<stdio.h>
// void main()
// {
//     char *s;
//     s ='hellow';
//     printf(%c,ft_strdup(s));

// }