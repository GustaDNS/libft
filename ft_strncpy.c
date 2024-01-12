#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int	main()
// {
//  	char a[] = "gustavo";
// 	char b[] = "daniel";

// 	ft_strncpy(b, a, 3);
// 	printf("%s, %s\n", a, b);
// }
