int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int reverse;
	int temp;
	int remainder;

	reverse = 0;
	while (nb > 0)
	{
		remainder = nb % 10;
		reverse = reverse * 10 + remainder;
		nb /= 10;
	}
	while (reverse > 0)
	{
		temp = reverse % 10;
		ft_putchar(temp + '0');
		reverse /= 10;
	}
	return ;
}