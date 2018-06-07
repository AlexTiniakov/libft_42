/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 12:47:55 by otiniako          #+#    #+#             */
/*   Updated: 2018/03/31 13:03:06 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = -1;
	str = NULL;
	if (s && (int)len >= 0 && start < ft_strlen(s) + 1)
	{
		str = ft_strnew(len);
		if (!str)
			return (NULL);
		while (++i < (int)len && s[start + i])
			str[i] = s[(int)(start + i)];
	}
	return (str);
}
