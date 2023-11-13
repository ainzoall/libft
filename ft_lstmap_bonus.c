/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x                                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:22:59 by efelaous          #+#    #+#             */
/*   Updated: 2023/11/12 00:49:53 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sp_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst == NULL || new == NULL)
		return (-1);
	temp = *lst;
	while (temp && temp->next != NULL)
		temp = temp->next;
	if (temp)
		temp->next = new;
	else
		*lst = new;
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*rtn;
	t_list	*temp;
	void	*content;
	int		add;

	rtn = NULL;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
		{
			del(content);
			ft_lstclear(&rtn, del);
			return (NULL);
		}
		add = sp_lstadd_back(&rtn, temp);
		if (add == -1)
		{
			ft_lstclear(&rtn, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (rtn);
}
