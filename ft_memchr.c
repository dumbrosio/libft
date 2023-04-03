/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vd-ambro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:06:08 by vd-ambro          #+#    #+#             */
/*   Updated: 2023/04/03 17:06:49 by vd-ambro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;

	ps = (char *)s;
	while (*ps && n)
	{
		if (*ps == (char)c)
			return (ps);
		ps++;
		n--;
	}
	if ((char)c == '\0' && (char)c == *ps)
		return (ps);
	return (0);
}
