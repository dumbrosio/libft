
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ps;
    unsigned char uc;

    ps = (unsigned char *)s;
    uc = (unsigned char)c;

	while (n > 0)
	{
		*ps = uc;
		ps++;
		n--;
	}
	return (s);
}