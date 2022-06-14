/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:02:24 by yoav              #+#    #+#             */
/*   Updated: 2022/06/14 11:14:59 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = (char *)dest;
	s = (const char *)src;
	while (n)
	{
		--n;
		d[n] = s[n];
	}
	return (dest);
}
