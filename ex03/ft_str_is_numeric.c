#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char *arr = "fdsf2343";
	printf("%i\n", ft_str_is_numeric(arr));
}

int ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return 1;
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return 0;
		}
		str++;
	}
	return 1;
}