#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main()
// {
// 		char	a[] = "Hello";
// char	b[] = "Gustavo";

// ft_strcpy(b, a);
// 	printf("%s, %s\n", a, b);
// }