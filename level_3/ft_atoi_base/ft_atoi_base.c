int get_values(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int results = 0;
	int i = 0;
	int sign = 1;
	int values;

	if (str_base < 2 || str_base > 16)
		return 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((values = get_values(str[i])) >= 0 && values < str_base)
	{
		results = results * str_base +  values;
		i++;
	}
	return (results * sign);
}

