/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:49:05 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/16 13:49:05 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\t'
			|| c == '\n' || c == '\r' || c == '\v');
}

int			ft_atoi(const char *nptr)
{
	long	n;
	int		sign;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + *nptr - '0';
		nptr++;
	}
	return (n * sign);
}
