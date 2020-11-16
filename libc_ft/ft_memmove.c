/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:43:06 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/16 14:17:22 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s_dest;
	const char	*s_src;

	if (!dest && !src)
		return (dest);
	s_dest = (char *)dest;
	s_src = (char *)src;
	if (dest < src)
		while (n--)
			*(s_dest++) = *(s_src++);
	else
	{
		s_dest += n - 1;
		s_src += n - 1;
		while ((void *)s_dest >= dest)
			*(s_dest--) = *(s_src--);
	}
	return (dest);
}
