
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] && (i + needle_len - 1) < n)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
		{
			if (j == needle_len - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
