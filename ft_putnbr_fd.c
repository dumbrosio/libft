
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;

	nl = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nl = -nl;
	}
	if (nl > 100)
		ft_putnbr_fd(nl / 10, fd);
	else if ((nl / 10) > 0)
		ft_putchar_fd((nl / 10) + '0', fd);
	ft_putchar_fd((nl % 10) + '0', fd);
}
