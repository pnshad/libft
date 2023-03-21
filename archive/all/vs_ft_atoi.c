#include <stdbool.h>

bool	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r' || c == '\f');
}

bool	is_operator(char c)
{
	return (c == '-' || c == '+');
}

bool	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(const char *str)
{
	int	result;
	int	minus;

	minus = 1;
	while (is_whitespace(*str))
		str++;
	if (is_operator(*str))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (is_number(*str))
	{
		result *= 10;
		result += (*str) - '0';
		str++;
	}
	return (result * minus);
}

int main(int argc, char **argv)
{
    int num;

    if (argv != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    else 
    {
        num = ft_atoi(argv[1]);
        printf("num is:%d", num);
    }

}