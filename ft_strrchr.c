/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergin <iergin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 22:50:13 by iergin            #+#    #+#             */
/*   Updated: 2026/01/10 22:57:59 by iergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	if (*s == (char)c)
		res = (char *)s;
	return (res);
}
