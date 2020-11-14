/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:49:01 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:49:01 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*u_s1;
	const unsigned char	*u_s2;

	if (!s1 || !s2 || !n)
		return (0);
	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	while (*u_s1 && *u_s1 == *u_s2 && --n)
	{
		u_s1++;
		u_s2++;
	}
	return ((int)(*u_s1 - *u_s2));
}
