/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 20:03:05 by otiniako          #+#    #+#             */
/*   Updated: 2018/03/29 12:57:43 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;
	int		i;

	i = -1;
	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	while (++i <= len)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
