int	ft_iterative_factorial(int nb)
{
	unsigned long long res;
	
	res = 1;
	if (nb > 0 && nb <= 20)
	{
		
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	else
		return(0);
	return(res);
}
