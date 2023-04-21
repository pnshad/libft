#include "libft.h"
int main(void)
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = " ,Wrold!";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = "";
	s2 = " ,Wrold!";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = "Hello";
	s2 = "";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = "";
	s2 = "";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = NULL;
	s2 = " ,World!";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = "Hello";
	s2 = NULL;
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	s1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
	s2 = "Praesent euismod nisi eget velit commodo, eu elementum urna bibendum. Suspendisse potenti. In hac habitasse platea dictumst.";
	printf("s1:\t%s\n", s1);
	printf("s2:\t%s\n", s2);
	printf("%s\n", ft_strjoin(s1, s2));
	printf("--- --- --- --- ---\n");
	

	return (0);
}
