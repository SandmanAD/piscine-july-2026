#include <stdio.h>

char *ft_strupcase(char *str);




int main(void)
{
	char str[] = "This is test34234";
	printf("%s\n", ft_strupcase(str));
}

char *ft_strupcase(char *str)
{
	char *head = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return head;
}