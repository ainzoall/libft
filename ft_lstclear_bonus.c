/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:08:31 by efelaous          #+#    #+#             */
/*   Updated: 2023/11/11 21:13:46 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (lst == NULL || del == NULL)
		return ;
	temp = *lst;
	while (temp && temp != NULL)
	{
		del(temp->content);
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*lst = NULL;
}
