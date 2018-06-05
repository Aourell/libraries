#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		red_case;
	int		blue_case;
	char	empty_case;

	red_case = 0;
	blue_case = 0;
	while(str[red_case] != '\0')
	{
		red_case++;
	}
	red_case = red_case - 1;
	while(red_case > blue_case)
	{
		empty_case = str[blue_case];
		str[blue_case] = str[red_case];
		str[red_case] = empty_case;
		blue_case++;
		red_case--;
	}
	return (str);
}

int main()
{
	char	phrase[] = "abcde";

	ft_strrev(phrase);
	int i;
	i = 0;
	while (phrase[i] != '\0')
	{
		write(1, &phrase[i], 1);
		i++;
	}
	return (0);
}
