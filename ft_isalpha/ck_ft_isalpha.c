#include <stdio.h>
#include <assert.h>
#include "ft_isalpha.c"

int ft_isalpha(int c);

int main(void)
{
    // Test with valid uppercase letter
    assert(ft_isalpha('A') == 1);

    // Test with valid lowercase letter
    assert(ft_isalpha('z') == 1);

    // Test with invalid character
    assert(ft_isalpha('$') == 0);

    // Test with valid digit
    assert(ft_isalpha('7') == 0);

    // Test with valid whitespace character
    assert(ft_isalpha(' ') == 0);

    // Test with valid punctuation character
    assert(ft_isalpha('.') == 0);

    printf("All tests passed successfully!\n");
    return 0;
}

