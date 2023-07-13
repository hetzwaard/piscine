void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i != 10)
	{
		ft_putchar(i + '0');
		i++;
	}
	return ;
}