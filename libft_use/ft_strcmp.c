/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 12:25:46 by otiniako          #+#    #+#             */
/*   Updated: 2018/03/30 12:58:59 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	return ((*s1 && *s2 && (int)*s1 == (int)*s2) ? ft_strcmp(++s1, ++s2) :\
			(unsigned char)*s1 - (unsigned char)*s2);
}
