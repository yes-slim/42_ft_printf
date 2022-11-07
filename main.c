#include "libprintf.h"

static char	*ft_rev(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int main()
{
	int n = 153548534;
	int z = 0;
	int t = n;
	while (t)
	{
		t = t/16;
		z++;
	}
	char hex[] = "0123456789ABCDEF";
	char *res = malloc(sizeof(char) * z);
	int i = 0;
	while (n)
	{
		int a = n % 16;
		res[i] = hex[a];
		n = n / 16;
		i++;
	}
	res[i] = '\0';
	res = ft_rev(res);
	printf("%s\n", res);
}