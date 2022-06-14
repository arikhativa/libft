/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:15:38 by yoav              #+#    #+#             */
/*   Updated: 2022/06/14 11:23:39 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*runner;

	runner = (char *)s;
	while (n && *runner != c)
	{
		++runner;
		--n;
	}
	if (!n)
		return (0);
	return (runner);
}
