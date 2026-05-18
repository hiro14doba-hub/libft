/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 04:13:18 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 04:50:58 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *curr;
    t_list *next;
    curr = *lst;
    if(!*lst || !del)
        return;
    while(curr !=NULL)
    {
        next = curr->next;
        del(curr->content);
        free(curr);
        curr = next;
    }
    *lst = NULL;
}