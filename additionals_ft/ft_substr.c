/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:53:51 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/16 13:53:51 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	char		*sub_bp;
	unsigned	s_len;

	s_len = ft_strlen(s);
	if (!s || start >= s_len)
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
