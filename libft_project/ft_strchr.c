/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 14:33:12 by otiniako          #+#    #+#             */
/*   Updated: 2018/03/21 15:00:23 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (++i <= (int)ft_strlen(s))
		if ((int)s[i] == (int)c)
			return ((char *)(s + i));
	return (NULL);
}
