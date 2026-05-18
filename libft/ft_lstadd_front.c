/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 03:37:49 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 04:51:00 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    new->next = *lst;
    *lst = new;
}