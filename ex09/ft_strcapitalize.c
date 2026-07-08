// #include <stdio.h>
char *ft_strcapitalize(char *str);
/*
int main(void)
{
	char str[] = "dsafsdfsd jhgjh34234234ds fsdf weferew fewJHGKJH  gJH Gkjhb kjhlkjhl kjnkljn IHKLJ";
	ft_strcapitalize(str);
	printf("%s\n", str);
}
*/
char *ft_strcapitalize(char *str)
{
	int new_word = 1;
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (new_word == 1)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					new_word = 0;
				}
				else 
				{
					new_word = 0;
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z' && new_word == 0)
				{
					str[i] = str[i] + 32;
				}
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return str;
}
