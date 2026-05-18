/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 20:19:39 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/13 20:21:23 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
    int len;
    while(s[len] != '\0')
        len++;
    return(len);
}
void ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return;
    write(fd,s,ft_strlen(s));
}

void ft_putendl_fd(char *s, int fd)
{
    if(!s)
        return;
    ft_putstr_fd(s,fd);
    write(fd,'\0',1);
}