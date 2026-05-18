/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdobashi <hdobashi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 04:25:07 by hdobashi          #+#    #+#             */
/*   Updated: 2026/05/14 04:50:50 by hdobashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *res;
    t_list *new;
    void *content;

    if(!lst || !f || !del )
        return(NULL);
    res = NULL;
    while(lst != NULL)
    {
        content = f(lst->content);
        new = ft_lstnew(content);
        if(!new)
        {
            del(content);
            ft_lstclear(&res,del);
            return(NULL);
        }
        ft_lstadd_back(&res,new);
        lst = lst->next;
    }
    return(res);
}