/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:48:04 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:48:04 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	const char	*s_bp;

	if (!s)
		return (0);
	s_bp = s;
	while (*s)
		s++;
	return ((size_t)(s - s_bp));
}
