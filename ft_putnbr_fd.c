static int	check_size(long int value)
{
	int			size;
	long int	compare_value;

	size = 1;
	compare_value = value / 10;
	while (compare_value > 0)
	{
		compare_value /= 10;
		size++;
	}
	return (size);
}

static void	cnvr_vlue(long int value, int size, int fd)
{
	int			last_value;
	char		string_print[size + 1];
	int			counter;
	int			i;

	i = 0;
	counter = 1;
	while (counter <= size)
	{
		last_value = value % 10;
		value /= 10;
		string_print[size - counter] = last_value + '0';
		counter++;
	}
	string_print[size] = '\0';
	while (string_print[i] != '\0')
	{
		write(fd, &string_print[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	print_value;
	int			size;

	print_value = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		print_value *= -1;
	}
	size = check_size(print_value);
	cnvr_vlue(print_value, size, fd);
}