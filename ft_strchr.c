/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:20:44 by yoav              #+#    #+#             */
/*   Updated: 2022/06/13 17:35:02 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*runner;

	runner = (char *)s;
	while (*runner && *runner != c)
		++runner;
	if (c && !*runner)
		return ((char *)0);
	return (runner);
}
