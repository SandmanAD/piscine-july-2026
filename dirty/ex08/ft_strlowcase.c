#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char arr[] = "AIDER sdsds";
	ft_strlowcase(arr);
	printf("%s\n", arr);

}

char *ft_strlowcase(char *str)
{
	char *head = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return head;

}