/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 07:12:14 by clbrunet          #+#    #+#             */
/*   Updated: 2020/09/24 07:12:14 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trim;
	char const	*str_cp;
	unsigned	str_len;

	if (!s1 || !set)
		return ((char *)NULL);
	while (ft_strchr(set, *s1))
		s1++;
	str_len = ft_strlen(s1);
	str_cp = s1 + (str_len - 1);
	while (ft_strchr(set, *str_cp))
	{
		str_len--;
		str_cp--;
	}
	if (!(trim = malloc((str_len + 1) * sizeof(char))))
		return ((char *)NULL);
	str_cp = trim;
	while (str_len--)
		*(trim++) = *(s1++);
	*trim = 0;
	return ((char *)str_cp);
}
