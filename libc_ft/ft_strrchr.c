/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:10:28 by clemo             #+#    #+#             */
/*   Updated: 2020/09/23 11:10:28 by clemo            ###   ########.fr       */
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
