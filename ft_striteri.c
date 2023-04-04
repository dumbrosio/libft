
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	cur;

	if (!s || !f)
		return ;
	cur = 0;
	while (s[cur])
	{
		(*f)(cur, &s[cur]);
		cur++;
	}
}
