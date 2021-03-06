/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:46:47 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/06 11:13:52 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int z;

	if (!(*s2))
		return ((char*)s1);
	i = 0;
	z = 0;
	while (s1[i])
	{
		while (s1[i + z] == s2[z])
		{
			if (s2[z + 1] == '\0')
				return ((char*)(s1 + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (NULL);
}
