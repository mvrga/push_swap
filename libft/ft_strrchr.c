/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:13:14 by marcribe          #+#    #+#             */
/*   Updated: 2023/10/23 16:35:51 by marcribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*a;

	if (c > 127)
		c %= 256;
	a = (unsigned char *)&s[ft_strlen(s)];
	while (*s++)
	{
		if (*a == (unsigned char)c)
			return ((char *)(a));
		a--;
	}
	if (*a == c)
		return ((char *)(a));
	return (NULL);
}
