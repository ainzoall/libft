/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:45:08 by efelaous          #+#    #+#             */
/*   Updated: 2023/11/11 23:09:35 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (lst == NULL)
		return (0);
	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// #include <stdio.h>

// int main()
// {
// 	int	i = 0;
// 	char str[] = "hello world";
// 	t_list	*tr = ft_lstnew(str);

// 	while(str[i])
// 	{
// 		ft_lstadd_back(&tr, ft_lstnew(&str[i]));
// 		i++;
// 	}
// 	printf("%d\n", ft_lstsize(tr));
// }
