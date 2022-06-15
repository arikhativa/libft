/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:34:07 by yoav              #+#    #+#             */
/*   Updated: 2022/06/15 12:05:24 by yoav             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	substr_len;

	substr_len = ft_strlen((s + start));
	if (start > substr_len)
		return (ft_strdup(""));
	if (substr_len < len)
		len = substr_len;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret)
	{
		ft_strlcpy(ret, (s + start), len + 1);
	}
	return (ret);
}
