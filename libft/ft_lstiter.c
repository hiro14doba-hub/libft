/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 04:21:35 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 04:50:54 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}