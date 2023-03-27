#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include "ft_isalpha.c"

int main(void)
{
    // Test with valid uppercase letter
    assert(ft_isalpha('A') == isalpha('A'));

    // Test with valid lowercase letter
    assert(ft_isalpha('z') == isalpha('z'));

    // Test with invalid character
    assert(ft_isalpha('$') == isalpha('$'));

    // Test with valid digit
    assert(ft_isalpha('7') == isalpha('7'));

    // Test with valid whitespace character
    assert(ft_isalpha(' ') == isalpha(' '));

    // Test with valid punctuation character
    assert(ft_isalpha('.') == isalpha('.'));

    printf("All tests passed successfully!\n");
    return 0;
}

