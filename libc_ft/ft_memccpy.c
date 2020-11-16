/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:42:57 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/16 13:42:57 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*s_dest;
	const char	*s_src;
	char		c_c;

	s_dest = (char *)dest;
	s_src = (char *)src;
	c_c = (char)c;
	while (n--)
	{
		*s_dest = *(s_src++);
		if (*s_dest == c_c)
			return ((void *)(s_dest + 1));
		s_dest++;
	}
	return (NULL);
}
