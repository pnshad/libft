#include "libft.h"

int main(void)
{
  char input1[] = "hello123";
  char input2[] = "-456bye";
  char input3[] = "0";
  char input4[] = "2147483647";
  char input5[] = "-2147483648";
  char input6[] = "   -+ 123";
  char input7[] = "   -12 3";

  int ft_atoi_out;
  int sy_atoi_out;

  printf("Test 1  input:\t\t%s\n", input1);
  ft_atoi_out = ft_atoi(input1);
  sy_atoi_out = atoi(input1);
  printf("Test 1  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 1  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 2  input:\t\t%s\n", input2);
  ft_atoi_out = ft_atoi(input2);
  sy_atoi_out = atoi(input2);
  printf("Test 2  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 2  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 3  input:\t\t%s\n", input3);
  ft_atoi_out = ft_atoi(input3);
  sy_atoi_out = atoi(input3);
  printf("Test 3  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 3  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 4  input:\t\t%s\n", input4);
  ft_atoi_out = ft_atoi(input4);
  sy_atoi_out = atoi(input4);
  printf("Test 4  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 4  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 5  input:\t\t%s\n", input5);
  ft_atoi_out = ft_atoi(input5);
  sy_atoi_out = atoi(input5);
  printf("Test 5  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 5  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 6  input:\t\t%s\n", input6);
  ft_atoi_out = ft_atoi(input6);
  sy_atoi_out = atoi(input6);
  printf("Test 6  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 6  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("Test 7  input:\t\t%s\n", input7);
  ft_atoi_out = ft_atoi(input7);
  sy_atoi_out = atoi(input7);
  printf("Test 7  ft_atoi:\t%d\n", ft_atoi_out);
  printf("Test 7  sy_atoi:\t%d\n", sy_atoi_out);
  assert(ft_atoi_out == sy_atoi_out);

  printf("All tests passed successfully!\n");
  return 0;
}
