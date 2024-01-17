/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:22:00 by marvin            #+#    #+#             */
/*   Updated: 2024/01/13 14:22:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
		return(1);
	return(0);
}
/* int	main()
{
	printf("%d", ft_isascii('a'));
	return(0);
} */