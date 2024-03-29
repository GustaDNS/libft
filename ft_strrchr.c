/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:39:41 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:39:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*r;

	r = NULL;
	while (*str)
	{
		if (*str == (char)c)
			r = str;
		str++;
	}
	if ((char)c == *str)
		return ((char *)str);
	else
		return ((char *)r);
}
/* int	main()
{
	char *s = "Gustavo";
	char c = 'u';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return(0);
} */