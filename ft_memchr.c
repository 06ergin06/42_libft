/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergin <iergin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 23:13:41 by iergin            #+#    #+#             */
/*   Updated: 2026/01/10 23:24:11 by iergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	cnt;

	i = 0;
	src = (unsigned char *)s;
	cnt = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == cnt)
			return ((void *)&src[i]);
		i++;
	}
	return (0);
}
