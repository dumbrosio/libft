
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ps;

	ps = s;
	while (n > 0)
	{
		*ps = 0;
		ps++;
		n--;
	}
}
