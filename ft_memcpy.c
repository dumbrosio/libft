
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_data;
	char	*src_data;

	if (!src && !dest)
		return (NULL);
	i = 0;
	dest_data = (char *)dest;
	src_data = (char *)src;
	while (i < n)
	{
		dest_data[i] = src_data[i];
		i++;
	}
	return (dest_data);
}
