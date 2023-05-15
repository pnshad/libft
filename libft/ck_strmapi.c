/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:55:28 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/15 16:20:22 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ct_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** A platform for introducing different inputs
*/
void	run_strmapi_test_case(char const *s, char (*f)(unsigned int, char), char *des)
{
	char *out_ft = ft_strmapi(s, f);
	char *out_ct = ct_strmapi(s, f);

	printf("%s\n       test input: \"%s\"\n         function: \"%s\"\nft_strmapi output: \"%s\"\nct_strmapi output: \"%s\"\n\n",des , s, __func__, out_ft, out_ct);
	printf("%s\nFunction: %s\nTest input: \"%s\"\nft_strmapi output: \"%s\"\nct_strmapi output: \"%s\"\n\n", des, __func__, s, out_ft, out_ct);

	if (!out_ft || !out_ct)
		assert(out_ft == out_ct);
	else
		assert(strcmp(out_ft, out_ct) == 0);
	free(out_ft);
	free(out_ct);
}

/*
** A test function for ft_strmapi that returns 'X' for even indices and 'Y' for odd indices
*/
static char	st_tolower(unsigned int i, char c)
{
	if (i < 0)
		return ('\0');
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/* A test function for ft_strmapi that uppercases a string */
static char	st_toupper(unsigned int i, char c)
{
    if (i < 0)
        return ('\0');
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

/* A test function for ft_strmapi that multiplies a string by 2 */
static char	st_shift(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

/* A test function for ft_strmapi that returns 'X' for even indices and 'Y' for odd indices */
static char	st_evenodd(unsigned int i, char c)
{
	if (c == '\0')
		return ('\0');
	return (i % 2 == 0 ? 'X' : 'Y');
}

/*
** A robust implementation of ft_strmapi
*/

char	*ct_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len--)
		result[len] = f(len, s[len]);
	return (result);
}

/*
** Test scenarios
*/
void	ck_strmapi(void)
{
    // Print a message indicating the start of the ft_strchr testing
    printf("\nft_strmapi >>> testing...\n\n");

	/* Test case 1: Empty string */
	run_strmapi_test_case("", &st_evenodd, "Test case 1: Empty string tried with oddeven (XY) function");

	/* Test case 2: String with all lowercase letters */
	run_strmapi_test_case("HeLlO, WoRlD!", &st_tolower, "Test case 2: exposing all elements to tolower function");

	/* Test case 3: String with all uppercase letters */
	run_strmapi_test_case("HeLlO, WoRlD!", &st_toupper, "Test case 3: exposing all elements to toupper function");

	/* Test case 4: String with mixed case letters */
	run_strmapi_test_case("HeLlO, WoRlD!", &st_shift, "Test case 4: exposing all elements to shift (add 1 to char value) function");

	/* Test case 5: String with only one character */
	run_strmapi_test_case("HeLlO, WoRlD!", &st_evenodd, "Test case 5: exposing all elements to oddeven (XY) function");

	/* Test case 6: NULL string */
	run_strmapi_test_case(NULL, &st_evenodd, "Test case 6: NULL string as input (tried with oddeven function)");

	/* Test case 7: NULL function pointer */
	run_strmapi_test_case("HeLlO, WoRlD!", NULL, "Test case 7: NULL function pointer");

    // Check if the function has passed all test cases
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}


