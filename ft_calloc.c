/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelaous <efelaous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:29:31 by efelaous          #+#    #+#             */
/*   Updated: 2023/11/07 16:47:02 by efelaous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	unsigned char	*x;
	size_t			len;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	len = nmemb * size;
	x = ptr;
	while (len--)
	{
		*x = 0;
		x++;
	}
	return (ptr);
}
