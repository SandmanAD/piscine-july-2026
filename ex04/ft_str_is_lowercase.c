#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char *arr = "sadasd";
	printf("%i\n", ft_str_is_lowercase(arr));


}




int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return 1;
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return 0;
		}
		str++;
	}
	return 1;


}