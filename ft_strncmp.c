/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:48:25 by yoav              #+#    #+#             */
/*   Updated: 2022/07/13 13:48:54 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (*s1 && *s1 == *s2 && i < n)
	{
		++s1;
		++s2;
		++i;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}

// int main()
// {
// 	printf("A: %d\n", ft_strncmp("", "1", 1));
// }