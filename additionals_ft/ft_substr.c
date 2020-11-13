/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 07:10:59 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/13 06:40:33 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	char		*sub_bp;
	unsigned	s_len;

	if (!s)
		return ((char *)NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((char *)NULL);
	s += start;
	s_len -= start;
	if (s_len < len)
		len = s_len;
	if (!(sub = malloc(((len + 1) * sizeof(char)))))
		return ((char *)NULL);
	sub_bp = sub;
	while (len--)
	{
		*sub = *s;
		sub++;
		s++;
	}
	*sub = '\0';
	return (sub_bp);
}
