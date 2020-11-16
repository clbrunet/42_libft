/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:47:48 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/16 13:47:48 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*little_bp;
	int			tested_char;

	if (!*little)
		return ((char *)big);
	little_bp = little;
	while (*big && len)
	{
		while (len && *big && *big == *little)
		{
			big++;
			little++;
			len--;
		}
		tested_char = little - little_bp;
		if (!*little)
			return ((char *)(big - tested_char));
		big -= tested_char - 1;
		len += tested_char - 1;
		little = little_bp;
	}
	return (NULL);
}
