/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younjkim <younjkim@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 05:07:32 by younjkim          #+#    #+#             */
/*   Updated: 2021/06/13 06:46:49 by younjkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	len;

	i = 0;
	if (s == NULL)
		return (0);
	res = (char**)malloc(sizeof(char*) * charset)
	while (s[i])
	{
		if (s[i] == c)
		{

		}
		i++;
	}
}
