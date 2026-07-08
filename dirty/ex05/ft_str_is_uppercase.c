#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char *upper = "JHKJasdad";
	printf("%i\n", ft_str_is_uppercase(upper));

}

int ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return 1;
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return 0;
		}
		str++;
	}
	return 1;
}