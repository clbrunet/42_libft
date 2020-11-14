/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:49:58 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:49:58 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;
	char		c_c;

	if (!s)
		return ((char *)NULL);
	c_c = (char)c;
	ptr = NULL;
	while (*s)
	{
		if (*s == c_c)
			ptr = s;
		s++;
	}
	if (!c_c)
		return ((char *)s);
	return ((char *)ptr);
}
