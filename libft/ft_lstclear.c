/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:30:54 by marcribe          #+#    #+#             */
/*   Updated: 2023/11/07 20:30:56 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*element;

	if (!lst || !del)
		return ;
	element = *lst;
	while (element != NULL)
	{
		tmp = element->next;
		ft_lstdelone(element, del);
		element = tmp;
	}
	*lst = NULL;
}
