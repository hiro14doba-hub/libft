/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 03:45:34 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 14:22:46 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr;
    if(!lst || !new)
        return;
    if(!*lst)
        *lst = new;
    curr = *lst;
    while(curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}