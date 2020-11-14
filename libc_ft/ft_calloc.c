/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:46:33 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:46:36 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	res;

	if (!nmemb || !size)
		return (malloc(0));
	res = nmemb * size;
	if (res > 2147483647 || !(ptr = malloc(res)))
		return (NULL);
	ft_bzero(ptr, res);
	return (ptr);
}
