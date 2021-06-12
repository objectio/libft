/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:42:20 by younjkim          #+#    #+#             */
/*   Updated: 2021/06/12 13:33:12 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < n && ((unsigned char *)src)[i] && !flag)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	if (flag)
	{
		ft_memcpy(dst, src, i);
		return (dst + i);
	}
	else
	{
		ft_memcpy(dst, src, n);
		return (0);
	}
}
