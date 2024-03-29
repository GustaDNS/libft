/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:39:37 by marvin            #+#    #+#             */
/*   Updated: 2024/01/29 14:39:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		temp;

	if (!*little)
		return ((char *)big);
	while (*big && len != 0)
	{
		b = big;
		l = little;
		temp = len;
		while (*b && *l && *b == *l)
		{
			if (temp == 0)
				break ;
			b++;
			l++;
			temp--;
		}
		if (!*l)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
/* int	main()
{
	printf("%s", ft_strnstr("Gustavo", "tavo", 6));
	return(0);
} */