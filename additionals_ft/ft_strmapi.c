/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 07:13:07 by clbrunet          #+#    #+#             */
/*   Updated: 2020/09/24 07:13:07 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*mapi;
	char		*mapi_bp;
	unsigned	i;

	if (!s || !(mapi = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return ((char *)NULL);
	mapi_bp = mapi;
	i = 0;
	while (*s)
	{
		*mapi = (*f)(i, *s);
		mapi++;
		s++;
		i++;
	}
	*mapi = 0;
	return (mapi_bp);
}
