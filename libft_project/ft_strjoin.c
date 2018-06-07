/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:00:15 by otiniako          #+#    #+#             */
/*   Updated: 2018/03/29 16:05:24 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	str = NULL;
	if (s1 && s2)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s1) + 1);
		if (!str)
			return (NULL);
		str = ft_strcpy(str, s1);
		str = ft_strcat(str, s2);
	}
	return (str);
}
