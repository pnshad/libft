/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ck_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 04:55:28 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/16 01:19:44 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ct_striteri(char *s, void (*f)(unsigned int, char *));

/*
** A platform for introducing different inputs
*/
void    run_striteri_test_case(char *s, void (*f)(unsigned int, char *), char *des)
{
	char	*out_ft;
	char	*out_ct;

    if (!s)
	{
		out_ft = NULL;
    	out_ct = NULL;
	}
	else
	{
		size_t len = strlen(s);
    	out_ft = (char *)malloc(sizeof(char) * len + 1);
    	out_ct = (char *)malloc(sizeof(char) * len + 1);
		strlcpy(out_ft, s, len + 1);
		strlcpy(out_ct, s, len + 1);
    }
	ft_striteri(out_ft, f);
    ct_striteri(out_ct, f);
    printf("%s\n       test input: \"%s\"\nft_striteri output: \"%s\"\nct_striteri output: \"%s\"\n\n",des , s, out_ft, out_ct);

    if (!out_ft || !out_ct)
        assert(out_ft == out_ct);
    else
        assert(strcmp(out_ft, out_ct) == 0);
    free(out_ft);
    free(out_ct);
}

/*
** A test function for ft_striteri that returns 'X' for even indices and 'Y' for odd indices
*/
static void st_tolower(unsigned int i, char *c)
{
    if (i >= 0)
        if (*c >= 'A' && *c <= 'Z')
            *c = (*c + ('a' - 'A'));
}

/* A test function for ft_striteri that uppercases a string */
static void st_toupper(unsigned int i, char *c)
{
    if (i >= 0)
        if (*c >= 'a' && *c <= 'z')
            *c = (*c - ('a' - 'A'));
}

/* A test function for ft_striteri that multiplies a string by 2 */
static void st_indexc(unsigned int i, char *c)
{
    if (*c != '\0')
        *c = 'A' + i;
}

/* A test function for ft_striteri that returns 'X' for even indices and 'Y' for odd indices */
static void st_evenodd(unsigned int i, char *c)
{
    if (*c != '\0')
        *c = (i % 2 == 0 ? 'X' : 'Y');
}

/*
** A robust implementation of ft_striteri
*/

void ct_striteri(char *s, void (*f)(unsigned int, char *))
{
    char *buffer;
    size_t i;

    if (!s || !f)
        return;

    buffer = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    if (!buffer)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        buffer[i] = s[i];
        i++;
    }

    buffer[i] = '\0';
    assert(strcmp(s, buffer) == 0);
    free(buffer);
}

/*
** Test scenarios
*/
void    ck_striteri(void)
{
    // Print a message indicating the start of the ft_strchr testing
    printf("\nft_striteri >>> testing...\n\n");

    /* Test case 1: Empty string */
    run_striteri_test_case("", &st_evenodd, "Test case 1: empty string as input (tried with oddeven function)");

    run_striteri_test_case("HeLlO, WoRlD!", &st_evenodd, "Test case 2: eall elements with even indices become Xs and odd indices become Ys");

    run_striteri_test_case("HeLlO, WoRlD!", &st_tolower, "Test case 3: all elements sould become camel case");

    run_striteri_test_case("HeLlO, WoRlD!", &st_toupper, "Test case 4: all elements should become all caps ");

    run_striteri_test_case("HeLlO, WoRlD!", &st_indexc, "Test case 5: st_indexc outputs 'A' + i");

    run_striteri_test_case(NULL, &st_evenodd, "Test case 6: NULL string as input (tried with oddeven function)");

    run_striteri_test_case("HeLlO, WoRlD!", NULL, "Test case 7: NULL function pointer");

    // Check if the function has passed all test cases
    printf("function passed all test cases successfully!\n");
    printf("---- ---- ---- ---- ---- ---- ---- ---- ----\n");
}
