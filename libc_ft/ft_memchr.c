/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:47:17 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:47:17 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*s_s;
	unsigned char			uc_c;

	if (!s)
		return (NULL);
	s_s = (unsigned char *)s;
	uc_c = (unsigned char)c;
	while (n-- && *s_s != uc_c)
		s_s++;
	if (*s_s == uc_c)
		return ((void *)s_s);
	return (NULL);
}
