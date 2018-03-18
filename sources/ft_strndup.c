/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ollevche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:31:44 by ollevche          #+#    #+#             */
/*   Updated: 2018/02/26 18:31:47 by ollevche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*res;
	size_t	size;

	if (!src || !(res = ft_strnew(n)))
		return (NULL);
	size = ft_strlen(src);
	if (size > n)
		size = n;
	return (ft_strncpy(res, src, n));
}
