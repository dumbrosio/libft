
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	if (dstsize < ft_strlen(dest))
		return (ft_strlen(src) + dstsize);

	size_t	to_copy;
	size_t	result;
	size_t	i;
	size_t	j;

	to_copy = dstsize - ft_strlen(dest) - 1;
	result = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	j = 0;
	while(j < to_copy && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (result);
}