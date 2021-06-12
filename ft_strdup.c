/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:18:20 by younjkim          #+#    #+#             */
/*   Updated: 2021/06/12 18:24:14 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dst = (char*)malloc(len + 1);
	dst[len] = 0;
	while (--len >= 0)
		dst[len] = src[len];
	return (dst);
}
