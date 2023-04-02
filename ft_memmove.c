
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*data_dest;
	char	*data_src;

	if (!src && !dest)
		return (NULL);
	if (src > dest)
		dest = ft_memcpy(dest, src, n);
	else
	{
		data_dest = (char *)dest;
		data_src = (char *)src;
		while (n--)
			data_dest[n] = data_src[n];
	}
	return (dest);
}
