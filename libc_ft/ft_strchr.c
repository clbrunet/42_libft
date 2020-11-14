/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:47:49 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:47:49 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_c;

	if (!s)
		return ((char *)NULL);
	c_c = (char)c;
	while (*s && *s != c_c)
		s++;
	if (!c_c || *s == c_c)
		return ((char *)s);
	return ((char *)NULL);
}
