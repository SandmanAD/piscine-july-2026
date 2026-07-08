#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char str[] = "This is test";
	char dest[] = "typeshit";
	unsigned int size = 5;
	ft_strlcpy(dest, str, size);
	printf("%s\n", dest);

}


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_size = 0;
	unsigned int i = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	} 
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';

	}
	return src_size;
}