
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *ps;

	ps = (char *)s;
	while(*ps && n)
	{
		if (*ps == (char)c)
			return (ps);

		ps++;
		n--;
	}
	if ((char)c == '\0' && (char)c == *ps)
		return (ps);

	return (0);
}
